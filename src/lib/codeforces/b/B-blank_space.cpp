#include <bits/stdc++.h>

using namespace std;

#define ln '\n'

void solve()
{
  int n, c = 0, mx = 0;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      c++;
      mx = max(mx, c);
    }
    else
    {
      c = 0;
    }
  }

  cout << mx << ln;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;

  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
