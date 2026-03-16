#include <iostream>
using namespace std;

int main() {
    int szerokosc, dlugosc, i, obwod, n;

    cout << "Podaj ilosc placow zabaw: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Podaj szerokosc placu zabaw: ";
        cin >> szerokosc;
        cout << "Podaj dlugosc placu zabaw: ";
        cin >> dlugosc;
        obwod = 2 * szerokosc + 2* dlugosc;
        cout << "Obwod placu zabaw o podanych wymiarach wynosi: " << obwod << endl;
    }
    return 0;
}
