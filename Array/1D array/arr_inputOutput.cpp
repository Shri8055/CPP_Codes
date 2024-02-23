#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    cout<<"Enter array number:  ";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Array number are:  ";
    for(i=0;i<5;i++){
        cout<<" "<<a[i];
    }
}