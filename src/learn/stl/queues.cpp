#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ln "\n"
#define pb push_back
#define p  push
#define vi vector<int>
#define qi queue<int>

void solve()
{

  qi c;

  int n;
  cin >> n;

  while (n--)
  {
    int m;
    cin >> m;

    c.p(m);
  }

  while (!c.empty())
  {
    cout << c.front() << ' ';
    c.pop();
  }

  cout << ln;
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
}
