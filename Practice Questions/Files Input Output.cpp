#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "ankit singh";
    string st2;
    // opening files using constructor and writing to it
    ofstream out("this.txt");   // write operation
    out<<st; 

    // opening files using constructor and reading it
    ifstream in("sample60.txt"); // read operation
    in>>st2; 
    getline(in, st2);
    getline(in, st2);
    cout<<st2;
    in.close();

    return 0;
}    