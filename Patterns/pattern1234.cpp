#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter Rows:  ";
    cin>>a;
    cout<<"Enter Length:  ";
    cin>>b;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            cout<<" "<<j;
        }
        cout<<"\n";
    }
}