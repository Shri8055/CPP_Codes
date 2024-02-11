#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number:    ";
    cin>>a;
    if(( a%3==0 || a%5==0 ) && (a%15!=0)){
        cout<<"Number is Divisible by 3 and 5";
    }
    else{
        cout<<"Number not match Condition";
    }
}