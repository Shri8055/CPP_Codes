#include<iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"Enter length:    ";
    cin>>a;
    int b=1;
    for(i=1;i<=a;i++){
        cout<<" "<<b;
        b*=2;
    }
}