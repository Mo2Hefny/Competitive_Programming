#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int mn = 10;
int x[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int y[] = {-1, 1, -2, 2, -2, 2, -1, 1};

bool checker(std::string s, int move)
{
  if (move >= mn) return false;

  return s[0] >= 'a' && s[0] <= 'h' &&
         s[1] >= '1' && s[1] <= '8';
}

void solve(std::string start, std::string finish, std::string prev, int move)
{
  if (start == finish)
  {
    mn = move;
    return;
  }

  for (int i = 0; i < 8; i++)
  {
    std::string temp = start;
    temp[0] += x[i];
    temp[1] += y[i];
    if (checker(temp, move) && temp != prev)
      solve(temp, finish, start, move + 1);
  }
}

int knight(std::string start, std::string finish)
{
  mn = 10;
  solve(start, finish, "", 0);
  return mn;
}