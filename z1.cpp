#include <iostream>

using namespace std;

int main() {
    // Inicjalizacja zmiennych
    int A = 5;
    int B = A + 10;
    int C;
    double wynik;

    // Pro�ba o wprowadzenie warto�ci zmiennej C
    cout << "Podaj wartosc zmiennej C: ";
    cin >> C;

    // Obliczanie wyniku
    wynik = static_cast<double>(A + B) / C;

    // Wy�wietlanie r�wnania i wyniku
    cout << "Rownanie: (" << A << " + " << B << ") / " << C << endl;
    cout << "Wynik: " << wynik << endl;

    return 0;
}
