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
}
