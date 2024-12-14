/* #include<iostream>
using namespace std;

// Forward declaration
class Comlex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a + b);
        }

        int sumRealComplex(Complex , Complex); // defn. hm aapko complex k bare m batane k baad m de denge abhi hm sirf declrtn. de rhe h so first declaration then baad m defination toh yha par sirf m ye bataunga ki ek complex name ki ek class h jisko mne declare kiya h
        
        // int sumRealComplex(Complex o1, Complex o2) 
        // {
        //    return (o1.a + o2.a);
        // }

        // ab me frnd class banaunga and isme complex class kahega ki m Calculator k sumRealComplex ko igajat de jati h mere some private members ko access karne ki

};

class Complex
{
    int a, b;
    friend int Calculator :: sumRealComplex(Complex o1, Complex o2);         // // ab me frnd class banaunga and isme complex class kahega ki m Calculator k sumRealComplex ko igajat de jati h mere some private members ko access karne ki
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printNumber()
        {
            cout<<" Your Number is "<<a<<" + "<<b<<" i "<<endl;
        }
};

    int sumRealComplex(Complex o1, Complex o2) // deftn. of sumRealComplex
        {
            return (o1.a + o2.a);
        }

// class Calculator
// {
//    public:
//        int add(int a, int b)
//        {
//            return (a + b);
//        }
//
//        int Calculator :: sumRealComplex(Complex o1, Complex o2)
//        {
//            return (o1.a + o2.a);
//        }
//        // ab me frnd class banaunga and isme complex class kahega ki m Calculator k sumRealComplex ko igajat de jati h mere some private members ko access karne ki
//};

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7); 
    Calculator calc;                    // calc. obj    // ab m kya krunga m calc. class k sumRealComplex se en dono k
    int res = calc.sumRealComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
}  */





/* #include<iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a + b);
        }

        int sumRealComplex(Complex , Complex);
        
};

class Complex
{
    int a, b;
    friend int Calculator :: sumRealComplex(Complex , Complex);         
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printNumber()
        {
            cout<<" Your Number is "<<a<<" + "<<b<<" i "<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2) // deftn. of sumRealComplex
        {
            return (o1.a + o2.a);
        }

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7); 
    Calculator calc;                    
    int res = calc.sumRealComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
} */





#include<iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a + b);
        }

        int sumRealComplex(Complex , Complex);  // sum of real part
        int sumCompComplex(Complex , Complex); // sum of Complex part
};

class Complex
{
    int a, b;
    
    //friend int Calculator :: sumRealComplex(Complex , Complex);  // friend function  // make frnd. f. to access private data of real part
    //friend int Calculator :: sumCompComplex(Complex , Complex);  // friend function  // make frnd. f. to access private data of Complex part

    
    // Alter: Declaring the entire Calculator class as frnd. 
    friend class Calculator;  // friend class

    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printNumber()
        {
            cout<<" Your Number is "<<a<<" + "<<b<<" i "<<endl;
        }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2) // deftn. of sumRealComplex
        {
            return (o1.a + o2.a);
        }

int Calculator :: sumCompComplex(Complex o1, Complex o2) // deftn. of sumRealComplex
        {
            return (o1.b + o2.b);
        }        

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7); 
    Calculator calc;                    
    int res = calc.sumRealComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is "<< res <<endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout<<"The sum of Complex part of o1 and o2 is "<< resc <<endl;
    return 0;
}