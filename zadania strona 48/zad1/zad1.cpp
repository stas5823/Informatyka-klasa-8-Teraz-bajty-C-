#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    double suma, srednia;

    cout << "Obliczanie sumy i sredniej arytmetycznej" << endl;
    cout << endl;

    cout << "Podaj pierwsza liczbe:  ";
    cin >> a;

    cout << "Podaj druga liczbe:     ";
    cin >> b;

    cout << "Podaj trzecia liczbe:   ";
    cin >> c;

    suma    = a + b + c;
    srednia = suma / 3;

    cout << endl;
    cout << "Wprowadzone liczby: " << a << ", " << b << ", " << c << endl;
    cout << "Suma:               " << suma    << endl;
    cout << "Srednia arytmet.:   " << srednia << endl;

    return 0;
}
