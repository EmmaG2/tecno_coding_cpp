#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> memo;

ll wa(int n)
{

  if (n == 0 || n == 1)
    return 1;

  if (memo[n] != -1)
    return memo[n];

  return memo[n] = wa(n - 1) + wa(n - 2);
}

int main()
{
  int n;
  cin >> n;

  memo.assign(n + 1, -1);

  cout << wa(n) << endl;

  return 0;
}
