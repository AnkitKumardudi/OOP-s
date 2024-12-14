// Constructor Overloading - means that make multiple constructors in one pm. and choose/select one constructor b/w them which one is useful
/* #include<iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex()
        {
            a = 0;
            b = 0;
        }

        Complex(int x, int y)
        {
            a = x;
            b = y;
        }

        Complex(int x)
        {
            a = x;
            b = 0;
        }

        void printNumber()
        {
            cout<<"Your number is: "<< a <<" + "<<b<<" i "<<endl;
        }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
} */





#include<iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    public:
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }

        Complex(int x)
        {
            a = x;
            b = 0;
        }

        Complex()
        {
            a = 0;
            b = 0;
        }

        void printData();
};

void Complex :: printData()
{
    cout<< " Your Number is " << a << " + " << b << "i"<< endl;
}

int main()
{
    Complex c1(2, 9);
    c1.printData();

    Complex c2(1);
    c2.printData();

    Complex c3(9);
    c3.printData();

    return 0; 
}