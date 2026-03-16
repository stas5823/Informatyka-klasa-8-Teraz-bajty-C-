#include <iostream>
using namespace std;

int main() {
    float a, S, v;
    cout << "Wprowadz dlugosc boku szescianu: ";
    cin >> a;
    S = 6 * a * a;
    cout << "Pole powierzchni wynosi " << S;
    v = a * a * a;
    cout << "\nObjetosc wynosi " << v;
    return 0;
}
