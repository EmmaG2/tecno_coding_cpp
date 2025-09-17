#include <iostream>
#include <queue>

using namespace std;

queue<string> alumnos;
queue<string> trabajadores;

void solve()
{
  string opt1, opt2, ans;
  cin >> opt1;
  if (opt1 == "LLEGA")
  {
    cin >> opt2 >> ans;

    if (opt2 == "ALUMNO")
    {
      alumnos.push(ans);
    }
    else
    {
      trabajadores.push(ans);
    }
  }
  else if (opt1 == "ATIENDE")
  {
    if (!trabajadores.empty())
    {
      cout << trabajadores.front() << endl;
      trabajadores.pop();
    }
    else
    {
      cout << alumnos.front() << endl;
      alumnos.pop();
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
  return EXIT_SUCCESS;
}