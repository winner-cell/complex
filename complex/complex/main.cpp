#include"complex.h"
int main()
{
    complex c1, c2, c3;
    cin >> c1;
    cin >> c2;
    c3 = c1 + c2;
    cout << "c1 + c2=" << c3;
    c3 = c1 - c2;
    cout << "c1 - c2=" << c3;
    c3 = c1 * c2;
    cout << "c1 * c2=" << c3;
    c3 = c1 / c2;
    cout << "c1 / c2=" << c3;

    return 0;
}