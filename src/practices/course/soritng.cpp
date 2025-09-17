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
vi firs_list   = {-1, 0, 1, 32, -12, 3, 8, -120, 2, 1};
vi second_list = {-2, 1, 0, -2, -2, 3, 32, 12, 21, 18};

vi::iterator it1, it2;

// sort function
bool greater_than(int i, int j)
{
	return i > j;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << "PRIMERA LISTA" << ln;

	for (it1 = firs_list.begin(); it1 != firs_list.end(); it1++)
	{
		cout << *it1 << " ";
	}

	sort(firs_list.begin(), firs_list.end());

	cout << "\n\nElementos ordenados" << ln;

	for (it1 = firs_list.begin(); it1 != firs_list.end(); it1++)
	{
		cout << *it1 << ' ';
	}

	cout << ln << ln << "SEGUNDA LISTA" << ln;

	cout << "Elementos no ordenados: \n";

	for (it2 = second_list.begin(); it2 != second_list.end(); it2++)
	{
		cout << *it2 << ' ';
	}

	sort(second_list.begin(), second_list.end(), greater_than);

	cout << "\n\nElementos ordenados" << ln;

	for (it2 = second_list.begin(); it2 != second_list.end(); it2++)
	{
		cout << *it2 << ' ';
	}

	cout << ln;

	return 0;
}
