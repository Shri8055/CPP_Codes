#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter row:   ";
    cin>>a;
    int spa=(a*2)-1;
    int spa2=spa-a;
    int spa2H=spa2;
    for(i=1;i<=spa;i++){
        if(i<=a){
            for(j=1;j<=a-i;j++){
                cout<<"  ";
            }
            for(j=1;j<=i;j++){
                cout<<"  * ";
            }
            cout<<"\n";
        }
        else{
            for(j=1;j<=spa2+i-spa;j++){
                cout<<"  ";
            }
            for(j=1;j<=spa2H;j++){
                cout<<"  * ";
            }spa2H--;
            cout<<"\n";
        }
    }
}