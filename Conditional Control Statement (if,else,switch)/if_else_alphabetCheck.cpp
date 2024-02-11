#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Character:  ";
    cin>>ch;
    int ascii=(int)ch;
    if(ascii>=97 && ascii<=122){
        cout<<"Character in Lowercase Alphabet";
    }
    if(ascii>=65 && ascii<=90){
        cout<<"Character in Uppercase Alphabet";
    }
}