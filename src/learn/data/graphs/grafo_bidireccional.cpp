#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

const int N = 1e5 + 2;
bool      vis[N];
vi        adj[N];

int mx = 0, t = 0;

void dfs(int node)
{
  vis[node] = true;
  // cout << node << ' ';

  vi::iterator it;
  for (it = adj[node].begin(); it != adj[node].end(); it++)
  {
    if (!vis[*it])
    {
      t++;
      mx = max(mx, t);
      dfs(*it);
    }
  }

  cout << mx << ' ';
  t = 0;
}

int main()
{
  int n, m;
  cin >> n >> m;

  for (int i = 0; i <= n; i++)
    vis[i] = false;

  int x, y;

  for (int i = 0; i < m; i++)
  {
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  dfs(1);
  cout << '\n';

  return 0;
}
