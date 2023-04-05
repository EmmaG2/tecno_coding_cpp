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
int main()

/* clang-format on */

{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vi  numeros;
	int n;

	cin >> n;

	while (n-- > 0)
	{
		int t;
		cin >> t;
		numeros.push_back(t);
	}

	cout << '{' << " ";
	for (auto i = numeros.begin(); i < numeros.end(); i++)
	{
		cout << *i << ", ";
	}

	cout << '}' << ln;

	return 0;
}
