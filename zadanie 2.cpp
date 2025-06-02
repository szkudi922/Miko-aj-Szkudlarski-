#include <iostream>

using namespace std;


void sequence_a() {
    int x = -2;
    for (int i = 0; i < 30; i++) {
        cout << x << " ";
        x -= 2;  
    }
    cout << endl;
}


void sequence_b() {
    int x = 20;
    for (int i = 0; i < 30; i++) {
        cout << x << " ";
        x += 5;  
    }
    cout << endl;
}


void sequence_c() {
    int x = 1;
    for (int i = 0; i < 30; i++) {
        cout << x << " ";
        x += 3;  
    }
    cout << endl;
}

int main() {
    cout << "Ci¹g a: ";
    sequence_a();
    
    cout << "Ci¹g b: ";
    sequence_b();
    
    cout << "Ci¹g c: ";
    sequence_c();
    
    return 0;
}
