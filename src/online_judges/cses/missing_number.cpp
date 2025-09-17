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

bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/* clang-format on */
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, total_sum, total_sum2 = 0;
	cin >> n;

	total_sum = (n * (n + 1)) / 2;

	while (n-- > 1)
	{
		int t;
		cin >> t;
		total_sum2 = total_sum2 + t;
	}

	cout << total_sum - total_sum2 << ln;

	return 0;
}
