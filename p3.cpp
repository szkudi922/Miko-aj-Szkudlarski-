#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj a i b: ";
    cin >> a >> b;
    
    int w = a - b;
    int w2 = (2 * a + a * b) / w;
    cout << "Obliczenia:\n";
    cout << "w = a - b = " << a << " - " << b << " = " << w << endl;
    cout << "w2 = (2 * a + a * b) / w = (2 * " << a << " + " << a << " * " << b << ") / " << w << " = " << w2 << endl;

    return 0;
}

