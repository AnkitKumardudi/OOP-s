#include<iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }

        void get_number(void){
            cout << " Your roll no is " << roll_no << endl;
        }
};

class Test : public virtual student {  // : public virtual student
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void get_marks(void){
            cout << " Your result is here: " <<
                    " Maths: " << maths <<
                    " physics: " << physics << endl;
        }
};

class sports : virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void get_score(void){
            cout << " Your PT score is: " << score << endl;
        }    
};

class result : public Test, public sports{
        float total;
    public:
        void display(void){
            total = maths + physics  + score;
            get_number();
            get_marks();
            get_score();
            cout << " Your total score is: " << endl;
        }
};

int main(){
    result ankit;
    ankit.set_number(234);
    ankit.set_marks(98.9, 78.7);
    ankit.set_score(11.0);
    ankit.display();
    return 0;
}

