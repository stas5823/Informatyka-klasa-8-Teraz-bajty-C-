#include <iostream>
using namespace std;

int main()
{
    float kwota, cena;
    cout << "Podaj kwote calych zakupow: ";
    cin >> kwota;
    while (kwota >= 0.0099)
    {
        cout << "Podaj cene produktu: ";
        cin >> cena;
        kwota -= cena;
    }
    cout << "Koniec pieniedzy";
}
