#include <bits/stdc++.h>

using namespace std;

#define ln  "\n"
#define pb  push_back
#define ll  long long
#define mod 1000000007
#define vll vector<ll>

int main(int argc, char const *argv[])
{
	ll  n, total = 0, ans = INT_MAX;
	vll a;

	cin >> n;

	for (ll i = 0; i < n; i++)
	{
		ll m;
		cin >> m;

		a.pb(m);
		total += a[i];
	}

	for (ll i = 0; i < 1 << n; i++)
	{
		ll s = 0;
		for (ll j = 0; j < n; j++)
		{
			if (i & 1 << j)
				s += a[j];
		}
		ll curr = abs((total - s) - s);
		ans     = min(ans, curr);
	}

	cout << ans << ln;

	return 0;
}
