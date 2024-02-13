#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter rows:  ";
    cin>>a;
    b=1;
    for(i=1;i<=a;i++){
        if(i%2!=0){
            b=1;
        }
        else{
            b=0;
        }
        for(j=1;j<=i;j++){
            cout<<" "<<b;
            if(b==1){
                b=0;
            }
            else{
                b=1;
            }
        }
        cout<<"\n";
    }
}