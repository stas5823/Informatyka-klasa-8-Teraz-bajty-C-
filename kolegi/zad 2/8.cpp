#include <iostream>
using namespace std;

int main()
{
    int num, licznik_p, licznik_np;
    while (1)
    {
        cout << "Podaj liczbe: ";
        cin >> num;
        if (num / 2 * 2 == num)
        {
            licznik_p++;
        }
        else
        {
            licznik_np++;
        }
        cout << "Liczb parzystych: " << licznik_p << "   Liczb nieparzystych: " << licznik_np;
    }
}
