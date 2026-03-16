#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Podaj liczbe: ";
    cin >> num;
    if (num / 2 * 2 == num)
    {
        cout << "Parzysta";
    }
    else
    {
        cout << "Nieparzysta";
    }
}
