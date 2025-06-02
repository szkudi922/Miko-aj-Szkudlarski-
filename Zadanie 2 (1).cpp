#include <iostream>
using namespace std;

int main() {

    int liczba;


    cout << "Podaj liczbę: ";
    cin >> liczba;


    if (liczba % 2 == 0) {
        cout << "tak" << endl;  
    } else {
        cout << "nie" << endl;  
    }

    return 0;
}
