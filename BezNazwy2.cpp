#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

// Wagi do obliczenia cyfry kontrolnej
int wagi[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};

bool poprawnaCyfraKontrolna(string pesel) {
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += (pesel[i] - '0') * wagi[i];
    }
    int kontrolna = (10 - (suma % 10)) % 10;
    return kontrolna == (pesel[10] - '0');
}

int getRok(string pesel) {
    int rok = atoi(pesel.substr(0, 2).c_str());
    int miesiac = atoi(pesel.substr(2, 2).c_str());
    if (miesiac >= 1 && miesiac <= 12) return 1900 + rok;
    if (miesiac >= 21 && miesiac <= 32) return 2000 + rok;
    if (miesiac >= 81 && miesiac <= 92) return 1800 + rok;
    if (miesiac >= 41 && miesiac <= 52) return 2100 + rok;
    if (miesiac >= 61 && miesiac <= 72) return 2200 + rok;
    return 0;
}

int getMiesiac(string pesel) {
    int miesiac = atoi(pesel.substr(2, 2).c_str());
    if (miesiac >= 1 && miesiac <= 12) return miesiac;
    if (miesiac >= 21 && miesiac <= 32) return miesiac - 20;
    if (miesiac >= 81 && miesiac <= 92) return miesiac - 80;
    if (miesiac >= 41 && miesiac <= 52) return miesiac - 40;
    if (miesiac >= 61 && miesiac <= 72) return miesiac - 60;
    return 0;
}

int main() {
    ifstream plik("pesel.txt");
    ofstream wynik("odp_5.txt");
    string pesel;
    int grudzien = 0;
    int niepoprawne = 0;
    int zBiura = 0;
    int piecdziesiate = 0;

    int dekady[10] = {0};

    while (plik >> pesel) {
        bool poprawny = poprawnaCyfraKontrolna(pesel);
        if (!poprawny) {
            niepoprawne++;
            continue;
        }

        int miesiac = getMiesiac(pesel);
        int rok = getRok(pesel);
        zBiura++;

        if (miesiac == 12) grudzien++;
        if (rok >= 1950 && rok <= 1959) piecdziesiate++;

        dekady[(rok % 100) / 10]++;
    }

    wynik << "a) Osób urodzonych w grudniu: " << grudzien << endl;
    wynik << "b) Osób z poprawn¹ cyfr¹ kontroln¹: " << zBiura << endl;
    wynik << "c) Osób z b³êdn¹ cyfr¹ kontroln¹: " << niepoprawne << endl;
    wynik << "d) Osób urodzonych w latach 50.: " << piecdziesiate << endl;
    wynik << "e) Osób urodzonych w poszczególnych dekadach:" << endl;

    for (int i = 0; i < 10; i++) {
        int dekada = 1900 + (i * 10);
        wynik << "   " << dekada << "-" << dekada + 9 << ": " << dekady[i] << endl;
    }

    wynik.close();
    cout << "Gotowe! SprawdŸ plik odp_5.txt." << endl;
    return 0;
}

