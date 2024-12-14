// Abstract base class-> iss tarh ki base class(virtual) isko banaye hi isleye jata h ki iska m derived version bana sku aur ek aur derived class banaunga base class se aur fir usme aur features add karunga usse bolte h abstract base class


#include<iostream>
#include<cstring> 
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        
        virtual void display() = 0;  // do-nothing function ---> pure virtual function     
        
};

class CWHVideo: public CWH{
        float videoLength;
    public:
        CWHVideo(string s, float r, int vl): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout << " This is an amazing video with title " << title << endl;
            cout << " Ratings of this video: " << rating << " out of 5 stars " << endl;
            cout << " Length of this video is: " << videoLength << " minutes " << endl;
        }
};

class CWHText: public CWH{
        int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
    void display(){
        cout << " This is an amazing text tutorial with title " << title << endl;
        cout << " Ratings of this text tutorial: " << rating << " out of 5 stars " << endl;
        cout << " No. of words in this text tutorial is: " << words << " words " << endl;
    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = " Django tutorial ";
    vlen = 5.67;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    //djVideo.display();

    // for code with harry Text
    title = " Django tutorial Text ";
    words  = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    //djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]-> display();
    tuts[1]-> display();  // call derived class var.

    return 0;
}
