#include<iostream>
using namespace std;
int main(){
    int a,b,c,i,j;
    for(i=1;i<=500;i++){
        j=0;
        c=i;
        while(c>0){
            b=c%10;
            j+=(b*b*b);
            c/=10;
        }
        if(i==j){
            cout<<i<<" number is ARMSTRONG"<<endl;
        }
    }
}