#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Podaj liczbe: ";
    cin >> num;
    if (num / 3 * 3 == num)
    {
        cout << "Podzielna przez 3";
    }
    else
    {
        cout << "Niepodzielna przez 3";
    }
}
