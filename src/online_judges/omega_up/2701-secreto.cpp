#include <bits/stdc++.h>
using namespace std;
/* clang-format off */

// Tipos de datos
#define ln  "\n"
#define ll  long long
#define MOD 1000000007

/* clang-format on */
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n;
	cin >> n;
	int  matrizN[n][n];
	char matrixC[n][n];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> matrizN[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> matrixC[i][j];
		}
	}

	cin >> m;

	while (m--)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				swap(matrixC[i][j], matrixC[j][i]);
			}
			reverse(matrixC[i], matrixC[i] + n);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (matrixC[i][j] == 'X')
			{
				cout << matrizN[i][j] << " ";
			}
		}
	}
	return 0;
}