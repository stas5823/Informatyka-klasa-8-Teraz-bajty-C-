#include <iostream>
using namespace std;

int main() {
    float a, b, suma, roznica, iloczyn, iloraz;
    cout << "Podaj dwie liczby\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    suma = a + b;
    roznica = a - b;
    iloczyn = a * b;
    cout << "a + b = " << suma;
    cout << "\na - b = " << roznica;
    cout << "\na * b = " << iloczyn;
    if (b != 0) {
        iloraz = a / b;
        cout << "\na / b = " << iloraz;
    }
    else {
        cout << "\nNie dzielimy przez zero";
    return 0;
    }
}
