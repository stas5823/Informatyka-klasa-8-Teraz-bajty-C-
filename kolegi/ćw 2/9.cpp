#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b, reszta;

    cout << "Wprowadz dwie liczby\n";
    cin >> a;
    cin >> b;

    reszta = a % b;
    cout << "Reszta z dzielenia wynosi " << reszta;

    if (reszta == 0)
    {
        cout << "\nb jest dzielnikiem a";
    }
    else
    {
        cout << "\nb nie jest dzielnikiem a";
    }
}
