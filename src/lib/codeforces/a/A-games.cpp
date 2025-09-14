#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, ans = 1;
  cin >> n;
  int h[n];
  int a[n];

  for (int i = 0; i < n; i++)
  {
    int c, d;
    cin >> d >> d;
    h[i] = c;
    a[i] = d;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (h[i] == a[j])
        ++ans;
    }
  }

  cout << ans << '\n';

  return 0;
}
