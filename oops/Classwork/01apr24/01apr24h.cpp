//Define class complex with members real and imaginary. Also define function to setdata() to initialize the members, print() to display values and addnumbers

#include<iostream>
using namespace std;

class Complex
{
    private: 
    int real, imag;
    public:
    void readData()
    {
        cout<<"Enter a real and imaginary number: ";
        cin>>real>>imag;
    }
    void addComplexNumber(Complex comp1, Complex comp2)
    {
        real=comp1.real+comp2.real;
        imag=comp1.imag+comp2.imag;
    }
    void displaySum()
    {
        cout<<"Sum: "<<real<<"+"<<imag<<"i";
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.readData();
    c2.readData();
    c3.addComplexNumber(c1, c2);
    c3.displaySum();
}