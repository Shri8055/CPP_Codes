#include<iostream>
using namespace std;
int main(){
    int a[5],i,prod=1;
    cout<<"Enter array numbers:  ";
    for(i=0;i<5;i++){
        cin>>a[i];
        prod*=a[i];
    }
    cout<<"Array numbers are:  ";
    for(i=0;i<5;i++){
        cout<<" "<<a[i];
    }
    cout<<endl<<"Product of array numbers is:    "<<prod;
}