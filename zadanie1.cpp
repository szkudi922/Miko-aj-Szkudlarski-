#include <iostream>
using namespace std;

void naprawde_proste_sortowanie(int A[], int n) {
    int k = 0;

    
    for (int i = 0; i < n; i++) {
        if (A[i] == 1) {
            k++;
        }
    }

   
    for (int i = 0; i < k; i++) {
        A[i] = 1;
    }

    
    for (int i = k; i < n; i++) {
        A[i] = 2;
    }
}

int main() {
    int n;
    
   
    cout << "Podaj liczbe elementow w tablicy: ";
    cin >> n;

    int A[n];

    
    cout << "Podaj " << n << " elementow (1 lub 2):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }


    naprawde_proste_sortowanie(A, n);

    
    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
