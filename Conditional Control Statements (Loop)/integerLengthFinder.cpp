#include<iostream>
using namespace std;
int main(){
    int a,i,count=0;
    cout<<"Enter number:    ";
    cin>>a;
    int b=a;
    while(a>0){
        a/=10;
        count++;
    }
    if(b==0){
        cout<<"Length of Number is:  1";
    }
    else{
        cout<<"Length of Number is:  "<<count;
    }
}