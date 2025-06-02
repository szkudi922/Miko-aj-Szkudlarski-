#include <iostream>
using namespace std;

int podzial(int A[], int p, int r) {
    int pivot = A[r]; 
    int i = p - 1;    

    for (int j = p; j < r; j++) {
        
        if (A[j] <= pivot) {
            i++; 
            swap(A[i], A[j]); 
        }
    }
    swap(A[i + 1], A[r]); 
    return i + 1; 
}


void sortowanie_szybkie(int A[], int p, int r) {
    if (p < r) {
       
        int q = podzial(A, p, r);

        
        sortowanie_szybkie(A, p, q - 1);
        sortowanie_szybkie(A, q + 1, r);
    }
}

int main() {
    const int n = 11; 
    int A[n] = {29, 10, 14, 37, 13, 5, 1, 30, 8, 22, 18};

    
    sortowanie_szybkie(A, 0, n - 1);

    
    cout << "Posortowana tablica: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

