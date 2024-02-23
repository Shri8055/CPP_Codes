#include<iostream>
using namespace std;
int main(){
    int i,b,min;
    cout<<"Enter size of array:  ";
    cin>>b;
    int a[b];
    cout<<"Enter array numbers:  ";
    for(i=0;i<b;i++){
        cin>>a[i];
    }
    cout<<"Array numbers are:  ";
    for(i=0;i<b;i++){
        cout<<" "<<a[i];
    }
    min=a[0];
    for(i=0;i<b;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<endl<<"Minimum number in array:  "<<min;
}