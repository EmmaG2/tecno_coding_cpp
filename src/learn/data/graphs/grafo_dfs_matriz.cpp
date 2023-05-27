#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>

const int  N = 1e5 + 2;
bool       vis[N];
vector<vi> adj;

void dfs(int node)
{
  vis[node] = true;
  cout << node << ' ';

  vi::iterator it;

  for (it = adj[node].begin(); it != adj[node].end(); it++)
  {
    if (!vis[*it])
    {
      dfs(*it);
    }
  }
}

int main()
{
  int n, c;
  cin >> n >> c;

  for (int i = 0; i < n; i++)
  {
    vis[i] = false;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      adj[i][j] = -1;
    }
    adj[i][i] = 0;
  }

  int x, y;

  for (size_t i = 0; i < c; i++)
  {
    cin >> x >> y;

    adj[x][y] = 1;
    adj[y][x] = 1;
  }

  dfs(1);
}
