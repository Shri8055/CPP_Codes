#include<iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"Enter table name:    ";
    cin>>a;
    i=1;
    while(i<=10){
        cout<<a<<" * "<<i<<" = "<<a*i<<"\n";
        i++;
    }
}