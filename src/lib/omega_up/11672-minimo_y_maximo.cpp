#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
int       n, q, arr[MAXN], st[4 * MAXN];

// Función para construir el árbol de segmentos
void build(int node, int start, int end)
{
	if (start == end)
	{
		st[node] = arr[start];
	}
	else
	{
		int mid = (start + end) / 2;
		build(2 * node, start, mid);
		build(2 * node + 1, mid + 1, end);
		st[node] = st[2 * node] + st[2 * node + 1];
	}
}

// Función para realizar consultas en el árbol de segmentos
int query(int node, int start, int end, int l, int r)
{
	if (r < start || end < l)
	{
		return 0;
	}
	else if (l <= start && end <= r)
	{
		return st[node];
	}
	else
	{
		int mid = (start + end) / 2;
		int p1  = query(2 * node, start, mid, l, r);
		int p2  = query(2 * node + 1, mid + 1, end, l, r);
		return p1 + p2;
	}
}

int main()
{
	// Lectura de datos
	cin >> n >> q;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	// Construcción del árbol de segmentos
	build(1, 1, n);

	// Realización de consultas
	for (int i = 1; i <= q; i++)
	{
		int l, r;
		cin >> l >> r;
		cout << query(1, 1, n, l, r) << endl;
	}

	return 0;
}
