/* #include<iostream>
using namespace std;

template <class T>
class Ankit{
    public:
        T data;
        Ankit(T a){
            data = a;
        }
        void display(){
            cout<<data;
        }
};
int main(){
    Ankit<float> A(5.7);
    cout<<A.data<<endl;
    A.display();
    return 0;
} */










// display f. outside class
/* #include<iostream>
using namespace std;

template <class T>
class Ankit{
    public:
        T data;
        Ankit(T a){
            data = a;
        }
        void display();
};

template <class T>
void Ankit<T> :: display(){
    cout<<data;

    void func(int a){
        cout<<"I am first func() "<<a<<endl;
    }

    template <class T>
    void func(T a){
        cout<<"I am templatised func() "<<a<<endl;
    }
}

int main(){
    //Ankit<float> A(5.7);
    //Ankit<char> A('c');
    //cout<<A.data<<endl;
    //A.display();

    func(4); // Exact match takes the highest priority
    return 0;
} */
//o/p call is void func(int a) not template <class T> void func(T a)














// when func f. doesn't present
#include<iostream>
using namespace std;

template <class T>
class Ankit{
    public:
        T data;
        Ankit(T a){
            data = a;
        }
        void display();
};

template <class T>
void Ankit<T> :: display(){
    cout<<data;
}

    void func(int a){
        cout<<"I am first func() "<<a<<endl;
    }

    template <class T>
    void func(T a){
        cout<<"I am templatised func() "<<a<<endl;
    }

    template <class T>
    void func1(T a){
        cout<<"I am templatised func() "<<a<<endl;
    }


int main(){
    //Ankit<float> A(5.7);
    //Ankit<char> A('c');
    //cout<<A.data<<endl;
    //A.display();

    //func(4); // Exact match takes the highest priority
    func1(4); // Exact match takes the highest priority
    return 0;
}

// Output = call is void func1(T a) not void func(T a) and not void func (int a)