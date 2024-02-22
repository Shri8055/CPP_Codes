#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number:    ";
    cin>>a;
    int *p=&a;
    cout<<"Number a is:    "<<a;
    cout<<endl<<"a address  :    "<<&a;
    cout<<endl<<"p holds    :    "<<p;
    cout<<endl<<"*p holds   :    "<<*p;
    cout<<endl<<"p address  :    "<<&p;
}