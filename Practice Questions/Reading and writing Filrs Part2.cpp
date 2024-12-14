#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
    // connecting our file with hout stream
    ofstream hout("sample60.txt");

    // creating a name string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name: ";
    // cin>>name;
    getline(cin,name);

    // wtiting a string to the file
    hout<<name + " is my name";
    hout.close();

    ifstream hin("sample60.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    hin.close();

    return 0;
}