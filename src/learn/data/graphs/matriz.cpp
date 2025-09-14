#include <bits/stdc++.h>

using namespace std;

int dijkstra()
{
}

int main()
{

  int n, v;
  cin >> n >> v;
  int g[n][v];

  // Inicializar el grafo

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < v; j++)
    {
      g[i][j] = -1;
    }
  }

  // leer el grafo por consola

  for (int i = 0; i < v; i++)
  {

    int a, b, w;
    cin >> a >> b >> w;
    g[a - 1][b - 1] = w;

    g[i][i] = 0;
  }

  return 0;
}
