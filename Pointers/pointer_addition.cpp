#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number 1:  ";
    cin>>a;
    cout<<"Enter number 2:  ";
    cin>>b;
    int *p1=&a;
    int *p2=&b;
    *p1+=*p2;
    cout<<"Sum of 2 Numbers is:  "<<*p1;
}