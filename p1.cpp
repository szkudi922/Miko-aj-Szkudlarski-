#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj a i b: ";
    cin >> a >> b;
    
    int w = a - b;
    cout << "Obliczenia:\n";
    cout << "w = a - b = " << a << " - " << b << " = " << w << endl;

    return 0;
}

