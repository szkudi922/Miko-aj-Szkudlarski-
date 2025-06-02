#include <iostream>

using namespace std;

int main() {
    // Deklaracja zmiennych
    double M, N, X;
    double A, B, C, SUMA, ROZNICA, FORMULA_1, FORMULA_2;

    // Proœba o wprowadzenie wartoœci M, N i X
    cout << "Podaj wartosc M: ";
    cin >> M;
    cout << "Podaj wartosc N: ";
    cin >> N;
    cout << "Podaj wartosc X: ";
    cin >> X;

    // Obliczenia
    SUMA = M + N + X;
    A = X + 2;
    B = M + A;
    C = SUMA - B;
    ROZNICA = (M - X) / C;
    FORMULA_1 = (A + 2) / B;
    FORMULA_2 = (A / B) + (2 + B);

    // Wyœwietlenie równañ i wyników
    cout << "WYRAZENIA I WYNIKI:" << endl;
    cout << "A = X + 2 = " << X << " + 2 = " << A << endl;
    cout << "SUMA = M + N + X = " << M << " + " << N << " + " << X << " = " << SUMA << endl;
    cout << "B = M + A = " << M << " + " << A << " = " << B << endl;
    cout << "C = SUMA - B = " << SUMA << " - " << B << " = " << C << endl;
    cout << "ROZNICA = (M - X) / C = (" << M << " - " << X << ") / " << C << " = " << ROZNICA << endl;
    cout << "FORMULA 1 = (A + 2) / B = (" << A << " + 2) / " << B << " = " << FORMULA_1 << endl;
    cout << "FORMULA 2 = (A / B) + (2 + B) = (" << A << " / " << B << ") + (2 + " << B << ") = " << FORMULA_2 << endl;

    return 0;
}

