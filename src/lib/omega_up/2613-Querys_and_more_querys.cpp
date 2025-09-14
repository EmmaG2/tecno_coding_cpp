#include <bits/stdc++.h>

using namespace std;
/* clang-format off */

// Tipos de datos
#define ln  "\n"
#define ll  long long
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

/* clang-format on */
int n, o, a, m;
vi  v1;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	v1.reserve(1000000);

	for (int i = 0; i < n; i++)
	{
		cin >> m;
		v1[m]++;
	}

	cin >> o;

	while (o--)
	{
		cin >> a;
		cout << v1[a] << ln;
	}

	return 0;
}
