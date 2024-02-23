#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    cout<<"Enter student marks:  ";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"Students marks are:  ";
    for(i=0;i<5;i++){
        cout<<" "<<a[i];
    }
    for(i=0;i<5;i++){
        if(a[i]<35){
            cout<<endl<<"Roll No.: "<<i+1<<" is FAIL because "<<"student has "<<a[i]<<" < 35 marks.";
        }
    }
}