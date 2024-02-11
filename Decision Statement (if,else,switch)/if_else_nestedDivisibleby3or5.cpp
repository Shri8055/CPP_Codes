#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number:    ";
    cin>>a;
    if(a%3==0||a%5==0){
        if(a%15!=0){
            cout<<"Number Divisible by 3 or 5 but not by 15";
        }
        else{
            cout<<"Not matching Condition";
        }
    }
    else{
        cout<<"Not matching Condition";
    }
}