#include <iostream>
using namespace std;
int main()
{
    int a, b, iloraz, roznica;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Podaj dwie liczby\n";
        cin >> a >> b;

        roznica = a - b;
        cout << "a - b = " << roznica << endl;

        if(b != 0)
        {
            iloraz = a / b;
            cout << "a / b = " << iloraz << endl;
        }
        else
            cout << "Nie dzielimy przez zero\n";
    }

    return 0;
}
