#include <iostream>
using namespace std;

int main() {
    int wybor, i;
    float a, S, v;
    cout << "Wprowadz 0 - pole powierzchni, 1 - objetosc: ";
    cin >> wybor;

    for (i = 0; i < 10; i++) {
        cout << "\nWprowadz dlugosc boku szescianu: ";
        cin >> a;
        if (wybor == 0) {
            S = 6 * a * a;
            cout << "Pole powierzchni wynosi " << S;
        }
        if (wybor == 1) {
            v = a * a * a;
            cout << "\nObjetosc wynosi " << v;
        }
    }
    return 0;
}
