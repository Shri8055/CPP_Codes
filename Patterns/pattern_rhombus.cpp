#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter row:   ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(j=1;j<=a;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
}