#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter number 1:  ";
    cin>>a;
    cout<<"Enter number 2:  ";
    cin>>b;
    cout<<"Enter number 3:  ";
    cin>>c;
    if(a>b){    // else b is >
        if(a>c){    // else c is >
            cout<<"Number 1 ->"<<a<<" is Greater.";
        }
        else{
            cout<<"Number 3 ->"<<c<<" is Greater.";
        }
    }
    else{
        if(b>c){
            cout<<"Number 2 ->"<<b<<" is Greater.";
        }
        else{
            cout<<"Number 3 ->"<<c<<" is Greater.";
        }
    }
}