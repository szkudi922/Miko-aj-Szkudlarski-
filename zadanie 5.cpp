#include <iostream>

using namespace std;

int main() {
    int tablica[10][7] = {0}; 
    for (int i = 0; i < 10; i++) {
        tablica[i][0] = i;  
        tablica[i][1] = i * i; 
        tablica[i][2] = tablica[i][0] + tablica[i][1];  
        tablica[i][3] = tablica[i][1] - tablica[i][0];  
        
        if (i % 2 == 0) {
            tablica[i][4] = i;  
        } else {
            tablica[i][5] = i;  
        }
        
        tablica[i][6] = tablica[i][2] + tablica[i][4] + tablica[i][5];  
    }


    cout << "Tablica: " << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
