#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> podziel_na_slowa(const string& linia) {
    vector<string> slowa;
    stringstream ss(linia);
    string slowo;
    while (ss >> slowo)
        slowa.push_back(slowo);
    return slowa;
}

bool wszystkie_taka_sama_dlugosc(const vector<string>& slowa) {
    if (slowa.empty()) return false;
    int dl = slowa[0].length();
    for (int i = 1; i < slowa.size(); i++) {
        if (slowa[i].length() != dl)
            return false;
    }
    return true;
}

bool wszystkie_anagramy(const vector<string>& slowa) {
    if (slowa.empty()) return false;
    string wzorzec = slowa[0];
    sort(wzorzec.begin(), wzorzec.end());

    for (int i = 1; i < slowa.size(); i++) {
        string temp = slowa[i];
        sort(temp.begin(), temp.end());
        if (temp != wzorzec)
            return false;
    }
    return true;
}

int main() {
    ifstream plik("anagram.txt");
    ofstream plik_a("odp_4a.txt");
    ofstream plik_b("odp_4b.txt");

    if (!plik.is_open()) {
        cerr << "Nie mo¿na otworzyæ pliku anagram.txt!" << endl;
        return 1;
    }

    string linia;
    while (getline(plik, linia)) {
        vector<string> slowa = podziel_na_slowa(linia);

        if (wszystkie_taka_sama_dlugosc(slowa)) {
            plik_a << linia << endl;
        }

        if (wszystkie_anagramy(slowa)) {
            plik_b << linia << endl;
        }
    }

    plik.close();
    plik_a.close();
    plik_b.close();

    cout << "Gotowe! SprawdŸ pliki odp_4a.txt i odp_4b.txt." << endl;
    return 0;
}



