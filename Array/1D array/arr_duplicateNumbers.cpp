#include<iostream>
using namespace std;
int main(){
    int b,c,i,count=0;
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
    cout<<endl<<"Enter number to search for duplicates:   ";
    cin>>c;
    for(i=0;i<b;i++){
        if(c==a[i]){
            count++;
        }
    }
    cout<<"Number entered to search for duplicates appears "<<count<<" times.";
}