#include<iostream>
using namespace std;
int main(){
    int a,b=1,i,j;
    cout<<"Enter factorial number:  ";
    cin>>a;
    for(i=1;i<=a;i++){
        b=b*i;
        cout<<b<<endl;
    }
}