#include<iostream>
using namespace std;
int main(){
    int a,i,j;
    cout<<"Enter rows:  ";
    cin>>a;
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            cout<<"  "<<(char)(j+65);
        }
        cout<<"\n";
    }
}