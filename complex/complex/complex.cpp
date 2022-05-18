
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
    double deno = c.real * c.real + c.imag * c.imag;//������ķ�ĸ  
    this->real = ((this->real * c.real) + (this->imag * c.imag))/ deno;
    this->imag = ((this->imag * c.real) - (this->real * c.imag))/ deno;
    return *this;
}
ostream& operator << (ostream& output, complex& c) //�����������<<�����غ���
{
    output << "(" << c.real << "+" << c.imag << "i)" << endl;
    return output;
}
istream& operator >> (istream& input, complex& c)  //���������������>>��
{
    cout << "input real part and imaginary part of complex number:";
    input >> c.real >> c.imag;
    return input;
}