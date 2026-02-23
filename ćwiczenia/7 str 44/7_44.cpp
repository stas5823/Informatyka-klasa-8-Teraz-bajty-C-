#include <iostream>
using namespace std;

int main()
{
    int punkty, punkty_dodatkowe, srednia;

cout << "Podaj srednia: ";
cin >> srednia;
   punkty = 100;
if(srednia > 4 && srednia <=6)
    punkty_dodatkowe = 20;
cout << "Liczba punktow: "<< punkty + punkty_dodatkowe << endl;
else
    cout << "Liczba punktow: "<< punkty << endl;
}
