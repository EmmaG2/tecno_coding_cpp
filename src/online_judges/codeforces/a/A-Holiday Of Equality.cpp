#include <bits/stdc++.h>

using namespace std;

int main()
{
  int         n;
  int         res = 0;
  vector<int> a;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int k;
    cin >> k;
    a.push_back(k);
  }

  auto it = max_element(a.begin(), a.end());

  for (int b : a)
  {
    if (*it >= b)
    {
      res += *it - b;
    }
  }

  cout << res << endl;

  return 0;
}
