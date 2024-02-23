#include<iostream>
using namespace std;
int main(){
    int a[5],i,s;
    bool flag;
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
    flag=false;
    for(i=0;i<5;i++){
        if(s==a[i]){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"Number "<<s<<" is present in array.";
    }
    else{
        cout<<"Number "<<s<<" is not present in array.";
    }
}