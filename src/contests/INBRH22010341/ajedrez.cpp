#include <iostream>

#include <map>

using namespace std;

int main()
{
  char           c;
  int            d;
  map<char, int> m;

  m['a'] = 1;
  m['b'] = 2;
  m['c'] = 3;
  m['d'] = 4;
  m['e'] = 5;
  m['f'] = 6;
  m['g'] = 7;
  m['h'] = 8;

  cin >> c >> d;

  cout << (((m[c] + d) % 2 == 0) ? "NEGRO" : "BLANCO") << endl;
}