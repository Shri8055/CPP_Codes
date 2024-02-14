#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter rows:  ";
    cin>>a;
    b=(a/2)+1;
    for(i=1;i<=a;i++){
        for(j=0;j<a-i;j++){
            cout<<"    ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"  * ";
        }
        cout<<"\n";
    }
}