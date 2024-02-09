#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number:    ";
    cin>>a;
    if(a<=999 && a>99){
        cout<<"Number is Three Digit.";
    }
    else{
        cout<<"Number is not Three Digit.";
    }
}