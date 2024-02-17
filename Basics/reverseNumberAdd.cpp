#include<iostream>
using namespace std;
int main(){
    int a,b=0,c,d,i,j;
    cout<<"Enter number:    ";
    cin>>a;
    i=a;
    while(i>0){
        d=i%10;
        b=b*10+d;
        i/=10;
    }
    c=a+b;
    cout<<"Original Number is:   "<<a<<endl;
    cout<<"Reverse Number is:   "<<b<<endl;
    cout<<"Addition of Number before reverse and after reverse is:  "<<c;
}