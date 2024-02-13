#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter rows:  ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if((i==j)||(j==a-i+1)){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
}