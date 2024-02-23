#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter no. of students:   ";
    cin>>n;
    int a[n];
    cout<<"Enter student marks:  ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Students marks are:  ";
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<35){
            cout<<endl<<"Roll No.: "<<i+1<<" is FAIL because "<<"student has "<<a[i]<<" < 35 marks.";
        }
    }
}