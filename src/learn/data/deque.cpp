#include <bits/stdc++.h>

using namespace std;

struct Persona
{
  string name;
  int    age;
};

#define dq deque<Persona>
#define pb push_back
#define pf push_front

int main()
{
  dq  cola;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string s;
    int    a;
    char   c;

    cin >> c >> s >> a;

    if (c == 'F')
    {
      cola.pf(Persona{s, a});
    }
    else
      cola.pb(Persona{s, a});
  }

  cout << cola.front().name << ' ' << cola.back().name << endl;

  return 0;
}
