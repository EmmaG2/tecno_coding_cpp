#include <bits/stdc++.h>

using namespace std;

const int   MAXN = 10000;
vector<int> adj[MAXN];
bool        vis[MAXN];

bool dfs(int u)
{
  vis[u] = 1;

  cout << "Nodo visitado: " << u << endl;

  for (int i = 0; i < adj[u].size(); i++)
  {
    int v = adj[u][i];

    if (!vis[v])
      return dfs(v);
  }
}

int main()
{

  int m, n;

  cin >> n >> m;

  for (int i = 1; i <= m; i++)
  {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  return 0;
}
