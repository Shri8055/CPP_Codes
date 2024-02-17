#include<iostream>
using namespace std;
int main(){
    int a,b,i=0,j;
    cout<<"Enter number:    ";
    cin>>a;
    while(a>0){
        b=a%10;
        if(b%2==0){
            i+=b;
        }
        a/=10;
    }
    cout<<"Even number Addition is:  "<<i;
}