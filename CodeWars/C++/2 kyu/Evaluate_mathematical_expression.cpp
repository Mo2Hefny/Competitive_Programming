#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string PriorityCalc(vector<double> num, vector<char> ops)
{
  double res = ops.empty() ? num.front() : 0;

  for (int i = 0; i < ops.size(); i++)
  {
    if (ops[i] == '*')
    {
      num[i + 1] = num[i] * num[i + 1];
      res += num[i + 1];
      num.erase(num.begin() + i);
      ops.erase(ops.begin() + i);
      return PriorityCalc(num, ops);
    }
    else if (ops[i] == '/')
    {
      num[i + 1] = num[i] / num[i + 1];
      res += num[i + 1];
      num.erase(num.begin() + i);
      ops.erase(ops.begin() + i);
      return PriorityCalc(num, ops);
    }
  }
  for (int i = 0; i < ops.size(); i++)
  {
    if (ops[i] == '+')
    {
      num[i + 1] = num[i] + num[i + 1];
      res += num[i + 1];
      num.erase(num.begin() + i);
      ops.erase(ops.begin() + i);
      return PriorityCalc(num, ops);
    }
    else if (ops[i] == '-')
    {
      num[i + 1] = num[i] - num[i + 1];
      res += num[i + 1];
      num.erase(num.begin() + i);
      ops.erase(ops.begin() + i);
      return PriorityCalc(num, ops);
    }
  }

  string final;
  char buf[100];
  sprintf(buf, "%.20f", res);
  final = buf;
  return final;
}

string Bracketcalc(std::string sub_ex)
{
  string n = "";
  vector<double> nums;
  vector<char> ops;
  for (int i = 0; i < sub_ex.size(); i++)
  {
    if (sub_ex[i] == ' ')
      continue;

    if (sub_ex[i] == '-' && n.empty())
      n += sub_ex[i];
    else if (sub_ex[i] == '-' && n.size() == 1 && n[0] == '-')
      n.clear();

    else if (sub_ex[i] == '+' || sub_ex[i] == '-' || sub_ex[i] == '*' || sub_ex[i] == '/')
    {
      ops.push_back(sub_ex[i]);
      nums.push_back(stod(n));
      n.clear();
    }
    else
      n += sub_ex[i];
  }
  nums.push_back(stod(n));
  return PriorityCalc(nums, ops);
}

double calc(std::string str)
{
  int op = str.rfind('(');
  int cl = find(str.begin() + op, str.end(), ')') - str.begin();

  if (op != string::npos)
  {
    string bracket = Bracketcalc(str.substr(op + 1, cl - op - 1));
    str.erase(str.begin() + op, str.begin() + cl + 1);
    str.insert(op, bracket);
    return calc(str);
  }
  else
    return stod(Bracketcalc(str));

  return 0;
}