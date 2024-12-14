// When I don't comment the public members of D class
#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?" <<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout << "Kaise ho?" <<endl;
        }
};     

class Derived : public Base1, public Base2{
    int a;
        public:
        void greet(){
            Base1 :: greet();  // when we call greet f. then only base1 greet calls
            // Base2 :: greet();        // // when we call greet f. then only base2 greet calls
        }
};

class B{
    public:
        void say(){
            cout<< "Hello world"<<endl;
        }
};

class D : public B{
    int a;
                                                                                       
        //  D's new say() method will override(overwrite) base class say() method
    // public:
    //     void say(){
    //         cout<<"Hello my beautiful people"<< endl;
    //     }
};

int main(){
    // Ambibuity 1
        // Base1 base1obj;
        // Base2 base2obj;
        // base1obj.greet();
        // base2obj.greet();
        // Derived d;
        // d.greet();  // aagar m 'd' k greet() ko run karun toh wo konsa greet() run krega base1 ya base2 ka

    // Ambibuity 2
        B b;
        b.say();

        D d;
        d.say();

    return 0;
}