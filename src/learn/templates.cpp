#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define ll long long

// una template, es una especie de función genérica que nos
// ahorra la sobrecarga de métodos, usando métodos genéricos

template <typename T> T add(T a, T b)
{
	return a + b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll a, b, m;
	cin >> a >> b;

	m = add<ll>(a, b);

	cout << m << ln;

	return 0;
}
