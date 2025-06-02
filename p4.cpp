#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj a i b: ";
    cin >> a >> b;
    
    int w = a - b;
    int w4 = (a + b) * (a - 3) + 5 * (a * b);
    cout << "Obliczenia:\n";
    cout << "w = a - b = " << a << " - " << b << " = " << w << endl;
    cout << "w4 = (a + b) * (a - 3) + 5 * (a * b) = (" << a << " + " << b << ") * (" << a << " - 3) + 5 * (" << a << " * " << b << ") = " << w4 << endl;

    return 0;
}

