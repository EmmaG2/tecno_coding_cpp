#include <iostream>

using namespace std;

int main() {
    double fahrenheit = 0, celsius = 0;
    cout << "Ingresa los grados en fahrenheit: ";

    cin >> fahrenheit;

    cout << "Grados en celsius: ";

    celsius = 5.0 / 9.0 * ( fahrenheit - 32.0);

    cout << celsius << endl;

    return 0;
}
