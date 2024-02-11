#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Number:    ";
    cin>>a;
    if(a>0){
        cout<<"Absolute of entered Number is:   "<<a;
    }
    else{
        cout<<"Absolute of entered Number is:   "<<-(a);
    }
}