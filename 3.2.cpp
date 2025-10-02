#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, F;

    cout << " a, b, c, x: ";
    cin >> a >> b >> c >> x;

    F = (x < 0 && b != 0) ? (a * x * x + b) :
        ((x > 0 && b == 0) ? ((x - a) / (x - c)) : (x / c));

    cout << "F = " << F << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, F;

    cout << "Введіть a, b, c, x: ";
    cin >> a >> b >> c >> x;

    if (x < 0 && b != 0) {
        F = a * x * x + b;
    }
    else if (x > 0 && b == 0) {
        F = (x - a) / (x - c);
    }
    else {
        F = x / c;
    }

    cout << "F = " << F << endl;

    return 0;
}
