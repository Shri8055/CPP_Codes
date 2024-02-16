#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,k;
    cout<<"Enter rows:  ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=0;j<=a-i;j++){
            cout<<" * ";
        }
        for(j=1;j<(i*2)-1;j++){
            cout<<"   ";
        }
        for(j=0;j<=a-i;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
}