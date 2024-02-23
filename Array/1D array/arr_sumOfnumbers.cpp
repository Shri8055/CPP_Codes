#include<iostream>
using namespace std;
int main(){
    int a[5],i,sum=0;
    cout<<"Enter array numbers:  ";
    for(i=0;i<5;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Array numbers are:  ";
    for(i=0;i<5;i++){
        cout<<" "<<a[i];
    }
    cout<<endl<<"Sum of array numbers is:    "<<sum;
}