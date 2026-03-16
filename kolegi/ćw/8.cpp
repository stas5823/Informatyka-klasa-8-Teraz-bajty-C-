#include <iostream>
using namespace std;

int main() {
    int szerokosc, dlugosc, i, obwod;

    for (i = 0; i < 5; i++) {
        cout << "Podaj szerokosc placu zabaw: ";
        cin >> szerokosc;
        cout << "Podaj dlugosc placu zabaw: ";
        cin >> dlugosc;
        obwod = 2 * szerokosc + 2* dlugosc;
        cout << "Obwod placu zabaw o podanych wymiarach wynosi: " << obwod << endl;
    }
    return 0;
}
