#include <iostream>
using namespace std; int main() {int liczba, cyfra;  cout << "Podaj liczbe: "; cin >> liczba; while (liczba != 0) {cyfra = liczba % 10; cout << cyfra << "\n"; liczba = (liczba - cyfra) / 10;}}
