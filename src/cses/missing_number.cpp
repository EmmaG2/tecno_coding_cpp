#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define ll long long
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
