#include<iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"Interval of 3\n";
    cout<<"Enter length u want:  ";
    cin>>a;
    for(i=4;i<=a*3+1;i+=3){
        cout<<" "<<i;
    }
}