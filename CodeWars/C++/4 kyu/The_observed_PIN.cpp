#include <string>
#include <vector>
#include <map>
std::map<int, std::string> pin = {{1, "124"}, {2, "1235"}, {3, "236"},
                        {4, "1457"}, {5, "24568"}, {6, "3569"},
                        {7, "478"}, {8, "05789"}, {9, "689"},
                        {0, "08"}};
void solve(std::string obs, std::string comb, std::vector<std::string>& sol)
{
  if (obs.empty())
  {
    sol.push_back(comb);
    return;
  }
  for (size_t i = 0; i < pin[obs[0] - '0'].size(); i++)
    solve(obs.substr(1), comb + pin[obs[0] - '0'][i], sol);
}

std::vector<std::string> get_pins(std::string observed) {
  std::vector<std::string> sol;
  solve(observed, "", sol);
  return sol;
}