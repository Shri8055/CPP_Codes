#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter row:   ";
    cin>>a;
    b=1;
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            cout<<" "<<b;
            b++;
        }
        cout<<"\n";
    }
}