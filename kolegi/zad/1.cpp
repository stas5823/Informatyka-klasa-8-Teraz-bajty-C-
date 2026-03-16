#include <iostream>
using namespace std;

int main() {
    float a, b, c, avg;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Podaj trzecia liczbe: ";
    cin >> c;
    avg = (a + b + c) / 3;
    cout << "Srednia wynosi: " << avg;
    return 0;
}
