#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  vi x;

  x.push_back(0);
  x.push_back(0);
  x.push_back(0);
  x.push_back(0);

  cin >> x[0] >> x[1] >> x[2] >> x[3];

  sort(x.begin(), x.end());

  cout << abs((x[0] + x[3]) - (x[1] + x[2])) << endl;

  return 0;
}

// 1 8 2 3
// 1 2 3 8 -- 9 5