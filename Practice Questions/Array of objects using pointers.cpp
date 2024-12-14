#include<iostream>
using namespace std;

class shopItem{
        int id;
        float price;
    public:
        void setData(int a, float b){
            id = a;
            price  = b;
        } 

        void getData(){
            cout << " The id of this item is: " << id << endl;
            cout << " The price of this item is: " << price << endl;
        }   
};
/* 
            1   2   3           1   2   3                   1   2   3        
            ^                       ^                               ^
            |                       |                               |
            |                       |                               |
            ptr                     ptr                             ptr
            ptrTemp            ptrTemp                     ptrTemp */

int main(){
    int size = 3;
    //int *ptr = &size;
    //shop *ptr = new shop[34];  // here shop is used as a datatype like " int a "

    //general store 
    // veggies 
    // hardware
    shopItem *ptr = new shopItem [size];
    shopItem *ptrTemp = ptr;        // to properly temp ptr pt. the value
    int p, i;
    float q;
    for (int i = 0; i<size; i++){
        cout << " Enter ID and and price of item: " << i+1 << endl;
        cin >> p >> q;
        //(*ptr).setData(p, q);
        ptr-> setData(p, q);
        ptr++;
    }

    for (i = 0; i < size ; i++){
        cout << "Item number: " << i+1<<endl;
        ptrTemp-> getData();
        ptrTemp++;
    }

    return 0;
}