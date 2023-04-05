#include <bits/stdc++.h>

using namespace std;

#define ln "\n"
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n;
	cin >> n;

	while (n != 1)
	{
		cout << n << ' ';
		if (n % 2 == 1)
		{
			n = 3 * n + 1;
		}
		else
		{
			n = n / 2;
		}
	}

	cout << n << ln;

	return 0;
}
