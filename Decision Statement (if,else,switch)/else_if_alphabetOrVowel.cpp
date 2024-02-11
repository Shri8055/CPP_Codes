#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter Alphabet:  ";
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            cout<<"Character is Vowel";
        }
        else{
            cout<<"Character is Alphabet";
        }
    }
}