#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0;
    cout<<"Enter number:    ";
    cin>>a;
    while(a>0){
        b=a%10;
        sum+=b;
        a/=10;
    }
    cout<<sum;
}