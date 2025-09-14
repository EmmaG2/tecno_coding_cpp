#include <bits/stdc++.h>
#include <cstddef>
using namespace std;
/* clang-format off */
#define ln "\n"
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi  vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si  set<int>
#define sc  set<char>
#define pb  push_back
#define MOD 1000000007
#define PI  3.1415926535897932384626433832795

/* clang-format on */

ll algebra(ll n, ll m)
{
  ll pow = 1;

  for (size_t i = 0; i < m; i++)
  {
    pow = (pow * n) % MOD;
  }

  if (m == 0)
    return 1;

  return pow % MOD;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll  exp_2, suma;
  int t, m, n;

  cin >> t;

  while (t--)
  {
    cin >> m >> n;
    exp_2 = 1;

    for (int i = 1; i <= m; i++)
    {
      exp_2 *= 2;
    }

    suma = exp_2;

    for (int i = m + 1; i <= n; i++)
    {
      exp_2 *= 2;
      suma += exp_2;
    }
    cout << suma << ln;
  }

  return 0;
}
