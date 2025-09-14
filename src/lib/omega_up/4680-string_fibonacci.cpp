#include <bits/stdc++.h>

using namespace std;

#define ln "\n"
typedef long long ll;

int main(int argc, char const *argv[])
{
	string f1, f2, fn;
	int    n;

	cin >> f1 >> f2 >> n;

	if (n == 1)
		cout << f1;
	else if (n == 2)
		cout << f2;
	else
	{
		for (int i = 3; i <= n; i++)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
	}

	cout << fn << ln;

	return 0;
}
