#include<iostream>
using namespace std;
// * * * * *
// * * * *
// * * *
// * *
// *   
int main(){
    int a,b,i,j;
    cout<<"Enter rows:   ";
    cin>>a;
    for(i=0;i<a;i++){
        for(j=0;j<a-i;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
}