#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter student 1 marks:  ";
    cin>>a;
    cout<<"Enter student 2 marks:  ";
    cin>>b;
    cout<<"Enter student 3 marks:  ";
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"Student 1 is BOTTOM G";
        }
        else{
            cout<<"Student 3 is BOTTOM G";
        }
    }
    else{
        if(b<c){
            cout<<"Student 2 is BOTTOM G";
        }
        else{
            cout<<"Student 3 is BOTTOM G";
        }
    }
}