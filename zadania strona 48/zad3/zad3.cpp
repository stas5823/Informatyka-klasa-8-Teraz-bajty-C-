#include <iostream>
using namespace std;

int main() {
    float a, b, h, pole = 0;

    cout << "Podaj podstawe a: ";
    cin >> a;

    cout << "Podaj podstawe b: ";
    cin >> b;

    cout << "Podaj wysokosc h: ";
    cin >> h;

    if (h > 0) {
        pole = (a + b) / 2 * h;
        cout << "Pole trapezu wynosi: " << pole << endl;
    } else {
        cout << "Niepoprawna dana" << endl;
    }

    return 0;
}
