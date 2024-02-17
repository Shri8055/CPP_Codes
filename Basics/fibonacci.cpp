#include<iostream>
using namespace std;
int main(){
    int a,b=1,c=1,d,e,i;
    cout<<"Enter length of Fibonacci:   ";
    cin>>a;
    cout<<b<<" "<<c;
    for(i=0;i<a-2;i++){
        d=b+c;
        cout<<" "<<d;
        c=b;
        b=d;
    }
}