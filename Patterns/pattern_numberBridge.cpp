#include<iostream>
using namespace std;
int main(){
    int a,b,i,j,k;
    cout<<"Enter rows:  ";
    cin>>a;
    b=(a*2)-1;
    for(i=1;i<=b;i++){
        cout<<"  "<<i;
    }cout<<"\n";
    for(i=1;i<=a-1;i++){
    k=1;
        for(j=1;j<=(a-i);j++){
            cout<<"  "<<k;
            k++;
        }
        for(j=0;j<(i*2)-1;j++){
            cout<<"   ";
            k++;
        }
        for(j=a+1;j<=b-i+1;j++){
            cout<<"  "<<k;
            k++;
        }
        cout<<"\n";
    }
}