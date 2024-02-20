#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    cout<<"Enter number 1:  ";
    cin>>a;
    cout<<"Enter number 2:  ";
    cin>>b;
    cout<<"Addition is:   "<<add(a,b);
}