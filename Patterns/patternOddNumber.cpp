#include<iostream>
using namespace std;
int main(){
    int a,i,j;
    cout<<"Enter rows:  ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=1;j<=i*2;j++){
            if(j%2!=0){
                cout<<" "<<j;
            }
        }
        cout<<"\n";
    }
}