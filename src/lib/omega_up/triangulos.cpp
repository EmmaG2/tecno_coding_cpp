//
// Created by thisismyemm4 on 27/04/23.
//
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c;

	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		cout << "equilatero" << endl;
	}
	else if (a != b && b == c)
	{
		cout << "isosceles" << endl;
	}
	else
		cout << "escaleno" << endl;

	return 0;
}