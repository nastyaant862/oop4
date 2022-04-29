#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double a = -0.6;
    double b = 5.3;
    double t, z;

    if (a < b) {
        z = sqrt(abs(a * a - b * b));
    }
    else {
        z = 1 - 2 * cos(a) * sin(b);
    }

    if (z < b) {
        t = pow((z + a * a * b), 1 / 3);
    }
    else if (z = b) {
        t = 1 - log10(z) + cos(a * a * b);
    }
    else {
        t = 1 / (cos(z * a));
    }

    cout << a << endl << b << endl << z << endl << t;
}
