#include <iostream>
#include <string>
using namespace std;

int main() {
    string tekst;
    char znak;
    
    cout << "Podaj tekst: ";
    getline(cin, tekst);  
    
    cout << "Podaj znak do wyszukania: ";
    cin >> znak;
    
    int liczba_wystapien = 0;
    

    for (char c : tekst) {
        if (c == znak) {
            liczba_wystapien++;
        }
    }
    
    cout << "Znak '" << znak << "' występuje " << liczba_wystapien << " razy w tekście." << endl;
    
    return 0;
}
