#include <iostream>
using namespace std;

int main() {
    float a, b, h, pole;

    cout << "Podaj podstawe a: ";
    cin >> a;

    cout << "Podaj podstawe b: ";
    cin >> b;

    cout << "Podaj wysokosc h: ";
    cin >> h;

    pole = (a + b) / 2 * h;

    cout << "Pole trapezu wynosi: " << pole << endl;

    return 0;
}
