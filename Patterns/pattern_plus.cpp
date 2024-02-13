#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Rows should be ODD for Better output.\n";
    cout<<"Enter rows:  ";
    cin>>a;
    b=(a/2)+1;
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if((j==b)||(i==b)){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
}