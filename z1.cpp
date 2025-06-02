#include <iostream>

using namespace std;

int main() {
    // Inicjalizacja zmiennych
    int A = 5;
    int B = A + 10;
    int C;
    double wynik;

    // Proœba o wprowadzenie wartoœci zmiennej C
    cout << "Podaj wartosc zmiennej C: ";
    cin >> C;

    // Obliczanie wyniku
    wynik = static_cast<double>(A + B) / C;

    // Wyœwietlanie równania i wyniku
    cout << "Rownanie: (" << A << " + " << B << ") / " << C << endl;
    cout << "Wynik: " << wynik << endl;

    return 0;
}
