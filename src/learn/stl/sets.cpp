#include <bits/stdc++.h>

#define ln "\n"
#define si set<int>

using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;
	si           setn;
	si::iterator it;
	int          o;

	while (n--)
	{
		int m;

		cin >> m;

		setn.insert(m);
	}

	cin >> o;

	it = setn.find(o);

	if (it == setn.end())
	{
		cout << -1 << ln;
		return 0;
	}

	cout << *it << ' ' << ln;

	return 0;
}
