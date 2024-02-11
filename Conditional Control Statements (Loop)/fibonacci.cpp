#include<iostream>
using namespace std;
int main(){
    int a,b=0,c=1,d,i;
    cout<<"Enter term:  ";
    cin>>a;
    cout<<b<<" "<<c;
    for(i=0;i<a;i++){
        d=b+c;
        cout<<" "<<d;
        b=c;
        c=d;
    }
    cout<<" Sum is:  "<<d;
}