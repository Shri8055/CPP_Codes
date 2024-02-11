#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int reverse=0,lastdigit=0;
    cout<<"Enter number:    ";
    cin>>a;
    while(a>0){
        reverse*=10;
        lastdigit=a%10;
        reverse+=lastdigit;
        a/=10;
    }
    cout<<"Reverse number is:   "<<reverse;
}