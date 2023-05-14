#include <bits/stdc++.h>
#include <map>

using namespace std;

#define ln  '\n'
#define vi  vector<int>
#define vs  vector<string>
#define pb  push_back
#define mii map<int, string>

void solve()
{
  int t = 0, n = 0, min = -1, min2 = -1, ind1 = 0, ind2 = 0, both = -1;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> t >> s;

    if (s[0] == s[1] && s[0] == '1')
    {
      if (both == -1)
      {
        both = t;
      }
      else
      {
        if (t < both)
        {
          both = t;
        }
      }
    }

    if (s[0] == '1')
    {
      if (min == -1)
      {
        min  = t;
        ind1 = i;
      }
      else
      {
        if (t < min)
        {
          min  = t;
          ind1 = i;
        }
      }
    }

    if (s[1] == '1')
    {
      if (min2 == -1)
      {
        min2 = t;
        ind2 = i;
      }
      else
      {
        if (t < min2)
        {
          min2 = t;
          ind2 = i;
        }
      }
    }
  }

  if (min == -1 || min2 == -1)
  {
    cout << -1 << ln;
  }
  else
  {
    int total = min + min2;
    if (both != -1)
    {

      if (total < both)
      {
        cout << total << ln;
      }
      else
      {
        cout << both << ln;
      }
    }
    else
    {
      cout << total << ln;
    }
  }
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
