// Copy Constructor


/* #include<iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number(){  //// Default Constructor
            a = 0;
        } 

        Number(int num)  // paramaterised Constructor
        {
            a = num;
        }

        Number(Number &obj)     // Copy Constructor
        {
            cout<< " Copy Constructor called!!! "<< endl;
            a = obj.a;
        }

        void display()
        {
            cout<< "The number for this object is "<< a << endl;
        }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    // z1 should exactly resemble z or x or y
    return 0;
} */





#include<iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number(){  // Default Constructor
            a = 0;
        } 

        Number(int num)  // paramaterised Constructor
        {
            a = num;
        }

// When there is no copy Constructor is found, Compiler supplies its own copy Constructor 
        // Number(Number &obj)     // Copy Constructor
        // {
        //     cout<< " Copy Constructor called!!! "<< endl;
        //     a = obj.a;
        // }

        void display()
        {
            cout<< "The number for this object is "<< a << endl;
        }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();

    Number z1(z);  // Copy constructor invoked
    z1.display();

    z2 = z;  // error // Copy constructor not called // b/c what we do  
    z2.display();

    Number z3 = z;  // copy constructor invoked 
    z3.display();

    // z1 should exactly resemble z or x or y

    return 0;
}