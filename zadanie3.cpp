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
    int n = 11;

    
    int A[11] = {29, 10, 14, 37, 13, 5, 1, 30, 8, 22, 18};

    
    sortowanie_przez_wstawianie(A, n);

    
    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}


