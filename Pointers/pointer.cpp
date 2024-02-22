#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    int *p=&a;
    cout<<"Enter number:    ";
    cin>>a;
    cout<<"Address of number is:    "<<&a;
    cout<<endl<<"Address of number is:    "<<p;
}