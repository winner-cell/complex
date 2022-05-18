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
    friend ostream& operator << (ostream&, complex&); //���������������<<��
    friend istream& operator >> (istream&, complex&); //���������������>>��
private:
    double real;
    double imag;
};
