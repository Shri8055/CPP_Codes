#include<iostream>
using namespace std;
int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return 1;
}
int main(){
    int a,b;
    cout<<"Enter number 1:    ";
    cin>>a;
    cout<<"Enter number 2:    ";
    cin>>b;
    int *p1=&a;
    int *p2=&b;
    swap(p1,p2);
    cout<<"Numbers after swap:  a-> "<<a<<"  b-> "<<b;
}