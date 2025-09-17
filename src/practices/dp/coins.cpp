#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;

int        n, m;
vi         coins;
vector<vi> memo;

int solve(int n, int i)
{

  if (n == 0)
    return 1;
  if (n < 0)
    return 0;

  if (memo[n][i] != -1)
    return memo[n][i];

  return memo[n][i] = solve(n - coins[i], i) + solve(n, i + 1);
}

int main()
{
  cin >> n >> m;

  coins.resize(m);

  memo.assign(n + 1, vi(m, -1));

  for (int i = 0; i < m; i++)
  {
    cin >> coins[i];
  }

  cout << solve(n, 0) << endl;

  return 0;
}
