#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Podaj a, b i c: ";
    cin >> a >> b >> c;
    
    int w5 = (a / b) + c;
    cout << "Obliczenia:\n";
    cout << "w5 = (a / b) + c = (" << a << " / " << b << ") + " << c << " = " << w5 << endl;

    return 0;
}

