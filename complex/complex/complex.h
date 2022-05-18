#include <iostream>
using namespace std;
class complex
{
public:
    complex(){}
    complex operator+(const complex& c);
    complex operator-(const complex& c);
    complex operator*(const complex& c);
    complex operator/(const complex& c);
    friend ostream& operator << (ostream&, complex&); //声明重载运算符“<<”
    friend istream& operator >> (istream&, complex&); //声明重载运算符“>>”
private:
    double real;
    double imag;
};
