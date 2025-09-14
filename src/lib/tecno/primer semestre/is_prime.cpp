#include <iostream>
#include <math.h>

#define ll long long

using namespace std;

bool prime(ll a)
{
  if (a == 1)
    return 0;
  for (int i = 2; i <= round(sqrt(a)); ++i)
    if (a % i == 0)
      return 0;
  return 1;
}

int main()
{
  int a;

  cout << "ingresa un número: " << endl;

  cin >> a;

  if (prime(a) == 1) {
    cout << "Es primo" << endl;
    return 0;
  }

  cout << "No es primo" << endl;

  return 0;
}
