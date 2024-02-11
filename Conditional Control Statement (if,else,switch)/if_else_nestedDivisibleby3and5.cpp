#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number:    ";
    cin>>a;
    if(a%3==0){
        if(a%5==0){
            cout<<"Number is Divisible by 3 And 5";
        }
        else{
            cout<<"Number is Divisible by 3 And but not by 5";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}