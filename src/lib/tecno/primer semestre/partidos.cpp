#include <iostream>

using namespace std;

// Entrada:
// partidos ganados, partidos perdidos, empates
// Salida:
// total

int main()
{
    int wins, loses, tie, total;

    cout << "Ingresa los partidos ganados: " << endl;
    cin >> wins;

    cout << "Ingresa los partidos perdidos: " << endl;
    cin >> loses;

    cout << "Ingresa los partidos empatados: " << endl;
    cin >> tie;

    total = wins * 3 + tie;

    cout << "Total: " << total << endl;

    return 0;
}