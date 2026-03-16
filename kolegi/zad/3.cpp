#include <iostream>
using namespace std;

int main() {
    float a, b, h, pole;

    cout << "Podaj dlugosc podstawy a: ";
    cin >> a;
    cout << "Podaj dlugosc podstawy b: ";
    cin >> b;
    cout << "podaj wysokosc: ";
    cin >> h;
    pole = (a + b) * h / 2;
    if (h > 0) {
        cout << "Pole wynosi: " << pole;
    }
    else {
        cout << "niepoprawna dana";
    }
    return 0;
}
