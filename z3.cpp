#include <iostream>
using namespace std;


int nwd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int nww(int a, int b) {
    return (a * b) / nwd(a, b);
}

int main() {
    int a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    
    cout << "NWW(" << a << ", " << b << ") = " << nww(a, b) << endl;
    
    return 0;
}
