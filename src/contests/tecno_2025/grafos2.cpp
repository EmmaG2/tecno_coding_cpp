#include <bits/stdc++.h>

using namespace std;

const int   MAXN = 40;
vector<int> adj[MAXN];
bool        vis[MAXN];

void dfs(int u)
{

  vis[u] = 1;

  for (int i = 0; i < adj[u].size(); i++)
  {
    int v = adj[u][i];

    if (!vis[v])
      dfs(v);
  }
}

int main()
{

  int n, m, s;

  cin >> n >> m >> s;

  for (int i = 1; i <= m; i++)
  {
    int u, v;

    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int c = 0;

  dfs(s);

  for (int i = 1; i <= n; i++)
  {
    if (vis[i])
      c++;
  }

  cout << c << endl;

  return 0;
}
