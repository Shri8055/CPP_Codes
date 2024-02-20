#include<iostream>
using namespace std;
int add(){
    int a,b,c;
    cout<<endl<<"Enter number 1:    ";
    cin>>a;
    cout<<"Enter number 2:    ";
    cin>>b;
    return a+b;
}
int main(){
    int a,b,c;
    cout<<"Two numbers Addition !!";
    cout<<"Addition is:    "<<add();
}