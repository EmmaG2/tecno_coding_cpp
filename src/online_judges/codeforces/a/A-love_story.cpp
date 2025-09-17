#include <bits/stdc++.h>

using namespace std;

void solve()
{
  string a = "", b = "codeforces";
  int    c = 0;

  cin >> a;

  for (int i = 0; i <= 10; i++)
  {
    if (a[i] != b[i])
      c++;
  }

  cout << c << '\n';
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  while (n--)
  {
    solve();
  }

  return 0;
}
