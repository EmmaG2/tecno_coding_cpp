#include <bits/stdc++.h>

using namespace std;

#define ln  "\n"
#define ll  long long int
#define mod 1000000007
#define vi  vector<int>

bool greater_than(int i, int j)
{
	return i > j;
}

int main(int argc, char const *argv[])
{
	ll     n, term = 0;
	int    q = 0, j = 3;
	string res = "";
	cin >> n;
	vi fib_pos;
	vi fib_val;
	fib_pos.push_back(1);
	fib_pos.push_back(2);

	fib_val.push_back(1);
	fib_val.push_back(2);

	for (int f2 = 1, f1 = 2, fn; f1 <= n; f2 = f1, f1 = fn, j++)
	{
		fn = f1 + f2;
		if (fn <= n)
		{
			fib_val.push_back(fn);
			fib_pos.push_back(j);
		}
	}

	sort(fib_pos.begin(), fib_pos.end(), greater_than);
	sort(fib_val.begin(), fib_val.end(), greater_than);

	for (int i = 0; i < fib_val.size(); i++)
	{
		if (term + fib_val[i] <= n)
		{
			res = res + to_string((fib_pos[i]));
			res.append(" ");
			term += fib_val[i];
			q++;
		}
	}

	cout << q << ln << res << ln;

	return 0;
}
