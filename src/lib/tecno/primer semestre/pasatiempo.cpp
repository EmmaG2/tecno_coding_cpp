#include <iostream>

using namespace std;

int main() {
    string pasatiempo;
    int age = 0;

    cout << "¿Cúal es tu pasatiempo?" << endl;
    getline(cin, pasatiempo);

    cout << "¿Cuál es tu edad?" << endl;
    cin >> age;

    if (age >= 18 && pasatiempo == "ir al cine") {
        cout << "te invito a hacer ejercicio" << endl;
    } else if (age < 18 && pasatiempo != "") {
        cout << "Felicidades" << endl;
    }

    return 0;
}
