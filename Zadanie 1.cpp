#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Podaj trzy liczby calkowite (a, b, c): ";
    cin >> a >> b >> c;

    int max_number = a;
    if (b > max_number) max_number = b;
    if (c > max_number) max_number = c;

    int sum_of_others;
    if (max_number == a) {
        sum_of_others = b + c;
    } else if (max_number == b) {
        sum_of_others = a + c;
    } else {
        sum_of_others = a + b;
    }

    for (int i = 0; i < max_number; i++) {
        cout << sum_of_others << " ";
    }

    return 0;
}
