#include <bits/stdc++.h>

using namespace std;

#define ln "\n"
#define vi vector<int>
#define pb push_back

int main(int argc, char const *argv[])
{
	vi a;

	a.reserve(4);

	for (int i = 0; i < 4; i++)
	{
		int n;
		cin >> n;
		a.pb(n);
	}

	sort(a.begin(), a.end());

	for (auto i : a)
		cout << i << ' ';

	cout << ln;

	return 0;
}
