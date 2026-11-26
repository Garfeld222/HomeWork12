#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex c1;
    cout << "Input first complex number" << endl;
    cin >> c1;

    Complex c2(3, -4);
    Complex c3(c2);

    cout << "\nNumber 1 (using Show): ";
    c1.Show();
    cout << "Number 2 (using <<): " << c2 << endl;
    cout << "Number 3 (copy of 2): " << c3 << endl;

    Complex res;
    res = c1 + c2;
    cout << "\nc1 + c2 = " << res << endl;

    res = c1 - c2;
    cout << "c1 - c2 = " << res << endl;

    res = c1 * c2;
    cout << "c1 * c2 = " << res << endl;

    c1 += c2;
    cout << "\nAfter c1 += c2, c1 is: " << c1 << endl;

    cout << "Prefix ++c2: " << ++c2 << endl;
    cout << "Postfix c2++: " << c2++ << endl;
    cout << "After postfix, c2 is: " << c2 << endl;

    if (c1 > c2) {
        cout << "\nc1 is greater than c2 (by modulus)" << endl;
    }
    else {
        cout << "\nc1 is NOT greater than c2 (by modulus)" << endl;
    }

    return 0;
}
