#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
void solve()
{
  int n;
  cin >> n;
  map<string, vector<string>> g;
  map<string, int> distance;
  for (int i = 0; i < n; i++)
  {
    string u, v;
    cin >> u >> v >> v;
    transform(all(u), u.begin(), ::tolower);
    transform(all(v), v.begin(), ::tolower);
    g[u].push_back(v);
    g[v].push_back(u);
    distance[u] = -1;
    distance[v] = -1;
  }
  int mx = -1;
  queue<string> q;
  q.push("polycarp");
  distance["polycarp"] = 1;
  while (!q.empty())
  {
    string u = q.front();
    q.pop();
    mx = max(mx, distance[u]);
    int depth = distance[u] + 1;

    for (auto &v : g[u])
    {
      if (distance[v] == -1)
      {
        q.push(v);
        distance[v] = depth;
      }
    }
  }
  cout << mx;
}

int main()
{
  solve();
  return 0;
}