#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Podaj pierwsza liczbe: ";
    cin >> num1;

    cout << "Podaj druga liczbe: ";
    cin >> num2;

    cout << "Wybierz operacje (+, -, *, /): ";
    cin >> operation;

    double result;

    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Wynik: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Wynik: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Wynik: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Wynik: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Nie mozna dzielic przez zero!" << endl;
                return 1; // Zwracamy 1, aby oznaczyæ b³¹d
            }
            break;
        default:
            cout << "Niepoprawna operacja!" << endl;
            return 1; // Zwracamy 1, aby oznaczyæ b³¹d
    }

    return 0;
}
