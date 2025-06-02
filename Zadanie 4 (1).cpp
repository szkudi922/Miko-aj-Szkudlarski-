#include <iostream>
using namespace std;

int main() {

    char znak;


    cout << "Podaj jeden znak: ";
    cin >> znak;


    if (znak >= 'a' && znak <= 'z') {

        if (znak == 'a' || znak == 'e' || znak == 'i' || znak == 'o' || znak == 'u') {
            cout << "To samogłoska." << endl;
        }

        else {
            cout << "To spółgłoska." << endl;
        }
    }

    else if (znak >= '0' && znak <= '9') {
        cout << "To cyfra." << endl;
    }

    else {
        cout << "To nie jest znak z alfabetu angielskiego lub cyfra." << endl;
    }

    return 0;
}
