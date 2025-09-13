#include <bits/stdc++.h>

using namespace std;
#define vi vector<string>

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string res, dr;
  char   e = 'D';
  int    t;

  cin >> t;

  while (t-- > 0)
  {
    string s;
    cin >> s;

    res = res + s;
  }

  for (size_t i = 0; i < res.size(); i++)
  {
    if (res[i] == e)
    {
      dr += res[i];
      e = ((e == 'D') ? 'R' : 'D');
    }
  }

  cout << dr << endl;

  cout << dr.size() / 2 << endl;

  return 0;
}
