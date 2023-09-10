#include <iostream>
#include <math.h>


using namespace std;

int main() 
{
    int age1=0, age2=0;

    cout << "ingresa la edad 1"<<endl;
    cin>>age1;

    cout << "ingresa la edad 2"<<endl;
    cin>>age2;

    cout << "Mayor: " << max(age1, age2)<<endl;
    cout << "Diferencia: " << (max(age1, age2) - min(age1, age2)) << endl;

    return 0;
}