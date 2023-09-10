#include <iostream>

using namespace std;

int main()
{
    double correctas, incorrectas, blanco, resultado = 0, total = 0;

    cout << "Respuestas correctas: " << endl;
    cin >> correctas;

    cout << "Respuestas incorrectas: " << endl;
    cin >> incorrectas;

    cout << "Respuestas en blanco: " << endl;
    cin >> blanco;

    resultado = correctas * 4;
    resultado += incorrectas * -1;

    total = (correctas + incorrectas + blanco) * 4;

    cout << "Total: " << (resultado / total) * 100 << "%" << endl;
    cout << "Puntaje por preguntas correctas: " << correctas * 4 << endl;
    cout << "Puntaje con preguntas incorrectas: " << incorrectas * -1 << endl;

    cout << "Máxico alcanzable: " << total << endl << endl;
    cout << resultado << "/" << total <<endl;


    return 0;
}