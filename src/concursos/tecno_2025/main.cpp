#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

#define vi vector<int>

void solve()
{
  vector<char> v = {'a', 'f', 'd'};

  // Inserting 'z' at the back
  v.push_back('z');

  // Inserting 'c' at index 1
  v.insert(v.begin() + 1, 'c');

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;

  cin >> t;

  while (t--)
  {
    solve();
  }
}