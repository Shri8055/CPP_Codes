#include<iostream>
using namespace std;
int main(){
    int a,i,product=1;
    cout<<"Enter number:    ";
    cin>>a;
    cout<<a<<" ! =";
    for(i=a;i>0;i--){
        product*=i;
        cout<<" "<<i<<" * ";
    }
    cout<<"Product "<<product;
}