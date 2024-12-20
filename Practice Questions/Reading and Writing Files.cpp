#include<iostream>
#include<fstream>

/* The useful classes for working with files in C++ are:
1. fstreambase-> base class
2. ifstream -> derived from fstreambase
3. ofstream -> derived from fstreambase 

In oreder work with files in C++, you will have to open it, primarily, there are two ways to open a file: 
1. Using the constructor 
2. Using the member function open() of the class  */

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
