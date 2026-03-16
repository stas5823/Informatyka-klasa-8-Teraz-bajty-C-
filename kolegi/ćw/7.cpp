#include <iostream>
using namespace std;

int main() {
    int punkty;
    float sr_ocen;
    cout << "Podaj srednia ocen: ";
    cin >> sr_ocen;
    punkty = 100;
    if (sr_ocen > 4 && sr_ocen <= 6) {
        punkty += 20;
    }
    cout << punkty;
    return 0;
}
