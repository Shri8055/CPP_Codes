#include<iostream>
using namespace std;
int main(){
    int a,b,count=0;
    cout<<"Enter number:    ";
    cin>>a;
    b=a/2;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            cout<<" "<<i;
            count++;
        }
    }
    cout<<" are factors of "<<a;
    if(count==2){
        cout<<" Hence Prime number.";
    }
    else{
        cout<<" Hence Composite number.";
    }
}