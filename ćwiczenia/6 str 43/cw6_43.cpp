#include <iostream>
using namespace std;

int main()
{
    int a,b,iloraz;
    cout << "Podaj dwie liczby\n";
    cin >> a >> b;
if(b != 0)
{
    iloraz = a / b;
    cout << "a / b = "<< iloraz;
}
else
    cout << "Nie dzielimy przez zero";

return 0;
}
