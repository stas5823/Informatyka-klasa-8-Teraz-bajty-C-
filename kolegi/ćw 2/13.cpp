#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b, dzielnik;
    cout << "Wprowadz dzie liczby\n";
    cin >> a;
    cin >> b;

    while (b != 0)
    {
        dzielnik = b;
        b = a % b;
        a = dzielnik;
    }
    cout << "NWD jest rowne " << a;
}
