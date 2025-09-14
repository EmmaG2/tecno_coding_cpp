#include <iostream>
using namespace std;

struct Nodo
{
	int   valor;
	Nodo *izquierdo;
	Nodo *derecho;
	Nodo(int val)
	{
		valor     = val;
		izquierdo = nullptr;
		derecho   = nullptr;
	}
};

struct ArbolBinario
{
	Nodo *raiz;
	ArbolBinario()
	{
		raiz = nullptr;
	}
	void insertar(int val)
	{
		if (raiz == nullptr)
		{
			raiz = new Nodo(val);
		}
		else
		{
			insertarRecursivamente(raiz, val);
		}
	}
	void recorridoInorden(Nodo *nodo)
	{
		if (nodo != nullptr)
		{
			recorridoInorden(nodo->izquierdo);
			cout << nodo->valor << " ";
			recorridoInorden(nodo->derecho);
		}
	}
	void recorridoPreorden(Nodo *nodo)
	{
		if (nodo != nullptr)
		{
			cout << nodo->valor << " ";
			recorridoPreorden(nodo->izquierdo);
			recorridoPreorden(nodo->derecho);
		}
	}
	void recorridoPostorden(Nodo *nodo)
	{
		if (nodo != nullptr)
		{
			recorridoPostorden(nodo->izquierdo);
			recorridoPostorden(nodo->derecho);
			cout << nodo->valor << " ";
		}
	}

private:
	void insertarRecursivamente(Nodo *nodo, int val)
	{
		if (val < nodo->valor)
		{
			if (nodo->izquierdo == nullptr)
			{
				nodo->izquierdo = new Nodo(val);
			}
			else
			{
				insertarRecursivamente(nodo->izquierdo, val);
			}
		}
		else
		{
			if (nodo->derecho == nullptr)
			{
				nodo->derecho = new Nodo(val);
			}
			else
			{
				insertarRecursivamente(nodo->derecho, val);
			}
		}
	}
};

int main()
{
	ArbolBinario arbol;
	arbol.insertar(4);
	arbol.insertar(34);
	arbol.insertar(1);
	arbol.insertar(0);
	arbol.insertar(123);

	cout << "Recorrido In-orden: ";
	arbol.recorridoInorden(arbol.raiz);
	cout << endl;

	cout << "Recorrido Pre-orden: ";
	arbol.recorridoPreorden(arbol.raiz);
	cout << endl;

	cout << "Recorrido Post-orden: ";
	arbol.recorridoPostorden(arbol.raiz);
	cout << endl;

	return 0;
}
