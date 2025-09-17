#include <bits/stdc++.h>

using namespace std;

struct rodillo
{
	int x, y, rad;
};

rodillo _[1100];
int     n;
int     anterior, actual;

void leer()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> _[i].x >> _[i].y >> _[i].rad;
		if ((_[i].x == 0) && (_[i].y == 0))
			actual = i;
	}
}

bool Estan_conectados(rodillo A, rodillo B)
{
	if (sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y)) == A.rad + B.rad)
		return true;
	return false;
}

void resp()
{
	int visitados = 1;
	while (visitados < n)
	{
		for (int i = 1; i <= n; i++)
		{
			if (Estan_conectados(_[actual], _[i]) && (anterior != i))
			{
				anterior = actual;
				actual   = i;
				visitados++;
				break;
			}
		}
	}
	cout << _[actual].x << " " << _[actual].y;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	leer();
	resp();

	return 0;
}
