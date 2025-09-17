#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<ll> memo;

ll fib(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  if (memo[n] != -1)
    return memo[n];

  return memo[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
  int n;

  cin >> n;

  memo.assign(n + 1, -1);

  cout << fib(n) << endl;

  return 0;
}
