#include <bits/stdc++.h>
using namespace std;
/* clang-format off */

// Tipos de datos
#define ln "\n"
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi  vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si  set<int>
#define sc  set<char>
#define pb  push_back
#define MOD 1000000007
#define PI  3.1415926535897932384626433832795

// algunas funciones útiles
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
void yes() { cout<<"YES"; }
void no() { cout<<"NO"; }
/* clang-format on */

ll get_sum(string n)
{
	ll total_sum = 0;

	for (char c : n)
		total_sum += c - '0';

	return total_sum;
}

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll        n, n_sum, people = 0;
	string    n_str;
	stack<ll> pila;

	cin >> n;

	n_sum = get_sum(to_string(n));

	while (n_sum != 21)
	{
		if (n_sum >= 63)
			n = 0;

		n++;
		people++;

		n_sum = get_sum(to_string(n));
	}

	n_str = to_string(n);
	reverse(n_str.begin(), n_str.end());

	for (char c : n_str)
	{
		int value = c - '0';
		pila.push(value);
	}

	while (pila.size() < 7)
		pila.push(0);

	cout << people << " ";

	while (!pila.empty())
	{
		cout << pila.top();
		pila.pop();
	}

	cout << ln;

	return 0;
}
