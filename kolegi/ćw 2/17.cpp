#include <iostream>
using namespace std; int main() {int liczba, cyfra, i; for (i=0; i<10


















; i++) {cout << "Podaj liczbe: "; cin >> liczba; while (liczba != 0) {cyfra = liczba % 10; cout << cyfra << "\n"; liczba = (liczba - cyfra) / 10;}}}
