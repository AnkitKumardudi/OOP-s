#include<iostream>
#include <cmath>
using namespace std;
/* 
Create 2 classes
    1. SimpleCalculator - Takes input of two numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your and displays the
        using another function.
    
    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritence are you using?  ------> Multiple inheritance
    Q2. Which mode of inheritance are you using? ------> public SimpleCalculator, public ScientificCalculator
    Q3. Create a object of HybridCalculator and display results of simple and scientific calculator. -------> 
    Q4. What is code reusability implemented?
 */



/* class SimpleCalculator{
        int a, b;
    public:
        void getData(){
            cout << " Enter the value of a " << endl;
            cin >> a;
            cout << " Enter the value of b " << endl;
            cin >> b;
        }

        void performOperations(){
            cout << " The value of a + b is: " << a + b << endl;
            cout << " The value of a - b is: " << a - b << endl;
            cout << " The value of a * b is: " << a * b << endl;
            cout << " The value of a / b is: " << a / b << endl;
        }
};

class ScientificCalculator{
    int a, b;
    public:
        void getData(){
            cout << " Enter the value of a " << endl;
            cin >> a;
            cout << " Enter the value of b " << endl;
            cin >> b;
        }

        void performOperations(){
            cout << " The value of cos(a) is: " << cos(a) << endl;
            cout << " The value of sin(a) is: " << sin(a) << endl;
            cout << " The value of exp(a) is: " << exp(a) << endl;
            cout << " The value of tan(a) is: " << tan(a) << endl;
        }
};

int main(){
    //SimpleCalculator calc;
    //calc.getData();
    //calc.performOperations();
    ScientificCalculator calc;
    calc.getData();
    calc.performOperations();
    return 0;
} */










class SimpleCalculator{
        int a, b;
    public:
        void getDataSimple(){
            cout << " Enter the value of a " << endl;
            cin >> a;
            cout << " Enter the value of b " << endl;
            cin >> b;
        }

        void performOperationsSimple(){
            cout << " The value of a + b is: " << a + b << endl;
            cout << " The value of a - b is: " << a - b << endl;
            cout << " The value of a * b is: " << a * b << endl;
            cout << " The value of a / b is: " << a / b << endl;
        }
};

class ScientificCalculator{
    int a, b;
    public:
        void getDataScientific(){
            cout << " Enter the value of a " << endl;
            cin >> a;
            cout << " Enter the value of b " << endl;
            cin >> b;
        }

        void performOperationsScientific(){
            cout << " The value of cos(a) is: " << cos(a) << endl;
            cout << " The value of sin(a) is: " << sin(a) << endl;
            cout << " The value of exp(a) is: " << exp(a) << endl;
            cout << " The value of tan(a) is: " << tan(a) << endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main(){
    //SimpleCalculator calc;
    //calc.getData();
    //calc.performOperations();

    //ScientificCalculator calc;
    //calc.getData();
    //calc.performOperations();

    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();

    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}