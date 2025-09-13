#include <iostream>
#include <math.h>

using namespace std;

int heigth(int root)
{
  if (root <= 5)
    return 1;
  return 1 + max(heigth(root - 5), heigth(floor(3 * root / 4)));
}

int fn(int n)
{
  if (n <= 5)
    return 1;
  return fn(n - 5) + fn(floor(3 * n / 4));
}

int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int n;

  cin >> n;

  cout << fn(n) << ' ' << heigth(n) << endl;
  return 0;
}