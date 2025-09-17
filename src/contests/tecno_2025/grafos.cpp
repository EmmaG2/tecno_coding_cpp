#include <iostream>
#include <utility>  // pair
#include <vector>
using namespace std;

const int   MAXN = 1000;  // máximo de nodos
vector<int> adj[MAXN];    // lista de adyacencia
bool        vis[MAXN];

void dfs(int u)
{
  vis[u] = 1;

  cout << "Visité el nodo: " << u << endl;

  for (int i = 0; i < adj[u].size(); i++)
  {
    int v = adj[u][i];

    if (!vis[v])
      dfs(v);
  }
}

int main()
{

  int n = 3;

  vector<pair<int, int>> edges = {{1, 3}, {1, 2}, {3, 2}};

  for (auto [u, v] : edges)
  {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int u = 1; u <= n; u++)
  {

    cout << "Vecinos de " << u << ':' << ' ';
    for (int v : adj[u])
      cout << v << ' ';

    cout << endl;
  }

  cout << "===========" << endl;

  dfs(1);

  return 0;
}
