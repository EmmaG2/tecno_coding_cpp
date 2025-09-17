#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
int        n, m;
vector<vi> memo;
vi         arr;

int solve(int n, int i)
{

  if (n == 0)
    return 1;
  if (i == m || n < 0)
    return 0;

  if (memo[n][i] != -1)
    return memo[n][i];

  return memo[n][i] = solve(n, i + 1) + solve(n - arr[i], i + 1);
}

int main()
{
  cin >> n >> m;
  arr.resize(m);
  memo.assign(n + 1, vi(m, -1));

  for (int i = 0; i < m; i++)
    cin >> arr[i];

  cout << solve(n, 0) << endl;

  return 0;
}
