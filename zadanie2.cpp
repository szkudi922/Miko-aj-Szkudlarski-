#include <iostream>
using namespace std;

void sortowanie_przez_wstawianie(int A[], int n) {
    int klucz, j;

    
    for (int i = 1; i < n; i++) {
        klucz = A[i];  
        j = i - 1;

        
        while (j >= 0 && A[j] > klucz) {
            A[j + 1] = A[j];  
            j--;
        }

        
        A[j + 1] = klucz;
    }
}

int main() {
    int n;

   
    cout << "Podaj liczbe elementow w tablicy: ";
    cin >> n;

    int* A = new int[n];  // Dynamiczne tworzenie tablicy

    
    cout << "Podaj " << n << " elementow:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

   
    sortowanie_przez_wstawianie(A, n);

   
    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;  
    return 0;
}
