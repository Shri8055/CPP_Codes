#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Marks:  ";
    cin>>a;
    if(a>=91){
        cout<<"Excellent!";
    }
    else if(a>=81){
        cout<<"Very Good";
    }
    else if(a>=71){
        cout<<"Good";
    }
    else if(a>=61){
        cout<<"Can do better";
    }
    else if(a>=51){
        cout<<"Average";
    }
    else if(a>=40 && a<=50){
        cout<<"Below Average";
    }
    else{
        cout<<"Fail !";
    }
}