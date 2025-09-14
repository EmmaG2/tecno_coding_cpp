#include <cmath>
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<double, int64_t> memo;

bool isEntero(float n)
{
  return n == static_cast<int>(n);
}

int64_t solve(double x)
{
  if (memo.find(x) != memo.end())
    return memo[x];

  if (x <= 2)
    return 1;
  if (x > 2 && !isEntero(x))
    return memo[x] = solve(floor(x)) + 2;
  if (x > 2 && isEntero(x) && (int)x % 2 == 0)
    return memo[x] = solve(x - 1) + solve(x - 2);
  if (x > 2 && isEntero(x) && (int)x % 2 == 1)
    return memo[x] = solve(x - 1) + solve(x / 2) + 1;

  return memo[x] = 0;
}

int main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  double n;

  cin >> n;

  cout << solve(n) % static_cast<int64_t>(2e64) << endl;

  memo.size();

  return EXIT_SUCCESS;
}
