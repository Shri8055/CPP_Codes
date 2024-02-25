#include<iostream>
using namespace std;
int main(){
    int i,b,max,smax;
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
    max=a[0];
    smax=a[0];
    for(i=0;i<b;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(i=0;i<b;i++){
        if(a[i]!=max && smax<a[i]){
            smax=a[i];
        }
    }
    cout<<endl<<"Maximum number in array:  "<<max;
    cout<<endl<<"Second maximum number in array:  "<<smax;
}