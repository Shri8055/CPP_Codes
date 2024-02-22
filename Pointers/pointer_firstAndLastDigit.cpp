#include<iostream>
using namespace std;
void fDlD(int a,int *p1,int *p2){
    *p2=a%10;
    while(a>9){
        a/=10;
    }
    *p1=a;
}
int main(){
    int a;
    cout<<"Enter number:    ";
    cin>>a;
    int fD,lD;
    int *p1=&fD;
    int *p2=&lD;
    fDlD(a,p1,p2);
    cout<<"First Digit is:  "<<fD<<endl;
    cout<<"Last Digit is:  "<<lD;
}