#include<iostream>
using namespace std;
int main(){
    int b,c,i;
    cout<<"Enter array size:    ";
    cin>>b;
    int a[b];
    cout<<"Enter numbers in array:  ";
    for(i=0;i<b;i++){
        cin>>a[i];
    }
    cout<<"Array numbers are:  ";
    for(i=0;i<b;i++){
        cout<<" "<<a[i];
    }
    cout<<endl<<"Enter number to find number max then this:  ";
    cin>>c;
    cout<<"Number greater than "<<c<<" are :->";
    for(i=0;i<b;i++){
        if(c<a[i]){
            cout<<" "<<a[i];
        }
    }
}