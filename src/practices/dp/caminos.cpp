#include <bits/stdc++.h>

int n, m;

using namespace std;

using vi = vector<int>;
vector<vi> memo;
vector<vi> mtrz;

int solve(int x, int y)
{
  if (x == n - 1 && y == m - 1)
    return 1;

  if (x >= n || y >= m)
    return 0;

  if (mtrz[x][y] == 1)
    return 0;

  if (memo[x][y] != -1)
    return memo[x][y];

  return memo[x][y] = solve(x + 1, y) + solve(x, y + 1);
}

int main()
{
  cin >> n >> m;

  memo.assign(n, vi(m, -1));
  mtrz.assign(n, vi(m, 0));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> mtrz[i][j];

  cout << solve(0, 0) << endl;
  return 0;
}
