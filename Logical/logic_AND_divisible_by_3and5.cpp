#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:  ";
    cin>>a;
    if(a%3==0 && a%5==0){
        cout<<"Entered Number is divisible by 3 & 5.";
    }
    else{
        cout<<"Entered Number is not divisible by 3 & 5.";
    }
}