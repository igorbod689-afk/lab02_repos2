

#include <iostream>
#include <cmath>     

using namespace std;

const double PI = 3.141592653589793;

int main()
{
    double a;   
    double z1;  
   // double z2;

    cout << "a = ";
    cin >> a;

    z1 = 2 * pow(sin(3 * PI - 2 * a), 2) * pow(cos(5 * PI + 2 * a), 2);
    //z2 = 0.25 - 0.25 * sin((5.0 / 2.0) * PI - 8 * a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    // cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}