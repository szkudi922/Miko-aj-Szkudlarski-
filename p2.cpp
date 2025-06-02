#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj a i b: ";
    cin >> a >> b;
    
    int w1 = (a + b) / (a - b);
    cout << "Obliczenia:\n";
    cout << "w1 = (a + b) / (a - b) = (" << a << " + " << b << ") / (" << a << " - " << b << ") = " << w1 << endl;

    return 0;
}

