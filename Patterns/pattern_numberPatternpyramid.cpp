#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter rows:  ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<" "<<j;
        }
        for(j=i-1;j>=1;j--){
            cout<<" "<<j;
        }
        cout<<"\n";
    }
}