#include<iostream>
using namespace std;
int main(){
    int a[5],i,s;
    cout<<"Enter array:  ";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Array numbers are:  ";
    for(i=0;i<5;i++){
        cout<<" "<<a[i];
    }
    cout<<endl<<"Enter number to search:  ";
    cin>>s;
    for(i=0;i<5;i++){
        if(s==a[i]){
            cout<<"Number "<<s<<" at location a["<<i<<"] of array.";
        }
    }
}