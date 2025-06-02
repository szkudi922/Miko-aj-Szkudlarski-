#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    cout << "Podaj wspolczynniki a, b, c (ax^2 + bx + c = 0):" << endl;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Rownanie ma nieskończoną ilość rozwiązań." << endl;
            } else {
                cout << "Równanie nie ma rozwiązania." << endl;
            }
        } else {
            cout << "Równanie liniowe: x = " << -c / b << endl;
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta > 0) {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Dwa pierwiastki rzeczywiste: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else if (delta == 0) {
            float x = -b / (2 * a);
            cout << "Jeden pierwiastek rzeczywisty: x = " << x << endl;
        } else {
            cout << "Brak pierwiastków rzeczywistych (delta < 0)." << endl;
        }
    }

    return 0;
}
