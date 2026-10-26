#include <iostream>
using namespace std;

int main()
{
    int N, i = 1, suma = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> N;
    while (i <= N)
    {
        suma = i + suma;
        i++;
    }
    cout
        << "La suma del 1 al numero N es: ";
    cout << suma;
    return 0;
}