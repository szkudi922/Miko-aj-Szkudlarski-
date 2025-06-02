#include <iostream>
#include <vector>

using namespace std;

double oblicz_wynik(double a, double n) {
    return 2 * (a - (n + 1));
}

vector<double> ciag_25_elementow(double a, double n, double i) {
    vector<double> wyniki;

    for (int j = 0; j < 25; j++) {
        wyniki.push_back(oblicz_wynik(a, n));
        n += i;  
    }

    return wyniki;
}

int main() {
    double a, n, i;

    cout << "Podaj wartoœæ a: ";
    cin >> a;

    cout << "Podaj wartoœæ n: ";
    cin >> n;

    cout << "Podaj wartoœæ i: ";
    cin >> i;

    vector<double> wyniki = ciag_25_elementow(a, n, i);

    cout << "Wyniki ci¹gu 25-elementowego:" << endl;
    for (double wynik : wyniki) {
        cout << wynik << " ";
    }
    cout << endl;

    return 0;
}
