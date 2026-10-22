#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double x, z1, z2, root;
 
    cout << "Variant 16" << endl;
    cout << "Enter x: ";
    cin >> x;
 
    root = sqrt(x * x - 9);
 
    z1 = (x * x + 2 * x - 3 + (x + 1) * root) / (x * x - 2 * x - 3 + (x - 1) * root);

    z2 = sqrt((x + 3) / (x - 3));
 
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
 
    return 0;
}
