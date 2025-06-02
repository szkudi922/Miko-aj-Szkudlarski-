#include <iostream>
using namespace std;

int main() {

    double a1, a2, a3, a4, a5;


    cout << "Podaj wartosc a1: ";
    cin >> a1;
    cout << "Podaj wartosc a2: ";
    cin >> a2;
    cout << "Podaj wartosc a3: ";
    cin >> a3;
    cout << "Podaj wartosc a4: ";
    cin >> a4;
    cout << "Podaj wartosc a5: ";
    cin >> a5;


    if (a5 == 0) {
        cout << "Blad: dzielenie przez zero!" << endl;
    } else {

        double wynik = ((a1 + a2) * a3 - a4) / a5;

        cout << "Wynik wyrazenia to: " << wynik << endl;
    }

    return 0;
}
