#include<iostream>
using namespace std;
int add(int x,int y){
    x+=y;
    cout<<"Addition is:  "<<x;
}
int main(){
    int a,b,c;
    cout<<"Enter number 1:    ";
    cin>>a;
    cout<<"Enter number 2:    ";
    cin>>b;
    add(a,b);
}