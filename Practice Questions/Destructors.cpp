// destructor doesn't take any argument and doesn't return anything . when our pm. is exit and exit the block of code so for storage clearup it(Destructor) call the compiler automatically
#include<iostream>
using namespace std;

int count = 0;
class num {
    public:
        num(){  // Constructor 
            count ++;
            cout<<" This is the time when Constructor is called for object number"<<count<<endl;
        }

        ~num()  // Destructor 
        {
            cout<< "This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};        

        int main()
        {
            cout<< " we are inside our main function "<< endl;
            cout<< " Creating first object n1"<<endl;
            num n1;
            {
                cout<< "Entering this block"<<endl;
                cout<< "Creating two more objects "<<endl;
                num n2, n3;
                cout<< "Exiting this block"<<endl;
            }
            cout<< "Back to main"<<endl;
            return 0;
        }