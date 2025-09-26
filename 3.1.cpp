#include <iostream>
using namespace std;

int main() {
    double x, A, B, y;
    cout << " x: ";
    cin >> x;

    A = 2; 

    
    if (x < 0) {
        B = 2;
    }
    else if (x >= 0 && x < 1) {
        B = 3;
    }
    else {
        B = 4;
    }

    y = A + B;
    cout << " y = " << y << endl;

    return 0;
}

