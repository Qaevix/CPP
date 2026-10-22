#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, z1, z2, root, numerator, denominator;

    cout << "Variant 16" << endl;
    cout << "Enter x: ";
    cin >> x;

    // Domain check: sqrt(x^2 - 9) needs x^2 >= 9, (x+3)/(x-3) needs x != 3.
    // The identity z1 = z2 holds only for x > 3 (for x < -3, z1 = -z2).
    if (x <= 3)
    {
        cout << "Error: x must be greater than 3 (domain of the task)" << endl;
        return 1;
    }

    root = sqrt(x * x - 9);

    // z1
    numerator = x * x + 2 * x - 3 + (x + 1) * root;
    denominator = x * x - 2 * x - 3 + (x - 1) * root;

    if (denominator == 0)
    {
        cout << "Error: denominator of z1 equals 0" << endl;
        return 1;
    }
    z1 = numerator / denominator;

    // z2
    z2 = sqrt((x + 3) / (x - 3));

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
