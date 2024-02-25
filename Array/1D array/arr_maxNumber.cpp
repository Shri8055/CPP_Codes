#include<iostream>
using namespace std;
int main(){
    int i,b,max;
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
    for(i=0;i<b;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<endl<<"Maximum number in array:  "<<max;
}