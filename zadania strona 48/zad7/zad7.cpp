#include <iostream>
using namespace std;

int main()
{
    float a, v, p;

    cout << "Podaj bok a: ";
    cin >> a;

    v = a * a * a;
    p = 6 * a * a;

    cout << "Objetosc V = " << v << endl;
    cout << "Pole powierzchni P = " << p << endl;

    return 0;
}
