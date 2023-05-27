#include <bits/stdc++.h>

using namespace std;

#define ln  '\n'
#define pb  push_back
#define vi  vector<int>
#define INF -1

void solve()
{
  int v, c;

  cin >> v >> c;
  int adj_mtr[v][c];

  for (int i = 0; i < v; i++)
  {
    for (int j = 0; j < c; j++)
    {
      adj_mtr[i][j] = INF;
    }

    adj_mtr[i][i] = 0;
  }

  for (int i = 0; i < c; i++)
  {
    int a, b, w;
    cin >> a >> b >> w;
    adj_mtr[a - 1][b - 1] = w;
  }

  cout << ln;

  for (int i = 0; i < v; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << adj_mtr[i][j] << ' ';
    }
    cout << ln;
  }
}

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
