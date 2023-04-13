#include <bits/stdc++.h>
using namespace std;
#define MOD 10000000
int get_sum(long long n)
{
	int r = 0;
	while (n > 0)
	{
		r += n % 10;
		n /= 10;
	}
	return r;
}
int main()
{
	long long n, i, k;
	cin >> n;
	for (i = n; get_sum(i % MOD) != 21; i++)
		;
	k = (i - n + MOD) % MOD;
	i = i % MOD;
	cout << k;
	printf(" %07lld", i);
}
