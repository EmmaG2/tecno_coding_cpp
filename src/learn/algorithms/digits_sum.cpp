#include <bits/stdc++.h>

using namespace std;

#define ll long long

int s(ll n)
{
	int a = 0;

	while (n > 0)
	{
		a += n % 10;
		n /= 10;
	}

	return a;
}

int main()
{

	ios::sync_with_stdio(NULL);
	cin.tie(NULL);

	ll n;

	cin >> n;

	cout << s(n) << endl;

	return 0;
}
