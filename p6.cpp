#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Podaj a, b i c: ";
    cin >> a >> b >> c;
    
    int w3 = 2 * b + (a - b) / b * (a / 5 - b);
    cout << "Obliczenia:\n";
    cout << "w3 = 2 * b + (a - b) / b * (a / 5 - b) = 2 * " << b << " + (" << a << " - " << b << ") / " << b << " * (" << a << " / 5 - " << b << ") = " << w3 << endl;

    return 0;
}

