
#include"complex.h"
/*complex::complex(double real = 0, double imag = 0)
{
    this->real = real;
    this->imag = imag;
}*/

complex complex::operator+(const complex& c)
{
    this->real = this->real + c.real;
    this->imag = this->imag + c.imag;
    return *this;
}
complex complex::operator-(const complex& c)
{
    this->real = this->real - c.real;
    this->imag = this->imag - c.imag;
    return *this;
}
complex complex::operator*(const complex& c)
{
    this->real = this->real * c.real - this->imag * c.imag;
    this->imag = this->imag * c.real + this->real * c.imag;
    return *this;
}
complex complex::operator/(const complex& c)
{
    double deno = c.real * c.real + c.imag * c.imag;//有理化后的分母  
    this->real = ((this->real * c.real) + (this->imag * c.imag))/ deno;
    this->imag = ((this->imag * c.real) - (this->real * c.imag))/ deno;
    return *this;
}
ostream& operator << (ostream& output, complex& c) //定义运算符“<<”重载函数
{
    output << "(" << c.real << "+" << c.imag << "i)" << endl;
    return output;
}
istream& operator >> (istream& input, complex& c)  //定义重载运算符“>>”
{
    cout << "input real part and imaginary part of complex number:";
    input >> c.real >> c.imag;
    return input;
}