#include<iostream>
#include<fstream>
// #include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("type.txt");
    out<<"This is me\n";
    out<<"This is me also";
    out.close();

    ifstream in;
    string st,st2;   //for reading both lines at same time 
    in.open("type.txt");
    cout<<st<<st2;

    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}
