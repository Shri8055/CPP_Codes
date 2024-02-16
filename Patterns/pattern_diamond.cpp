#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter rows:  ";
    cin>>a;                             // 4
    int spa=(a*2)-1;                    // 7
    int secondspa=spa-a;                // 3
    int secondspahelp=secondspa;
    int k=1;                            // 1
    for(i=1;i<=spa;i++){
        if(i<=(spa/2)+1){
            for(j=1;j<=a-i;j++){
                cout<<"  ";
            }
            for(j=1;j<=i;j++){
                cout<<" *  ";
            }
            cout<<"\n";
        }
        else{
            if(k<=secondspa){
                for(j=1;j<=k;j++){
                    cout<<"  ";
                }k++;
            }
            for(j=1;j<=secondspahelp;j++){
                cout<<" *  ";
            }secondspahelp--;
            cout<<"\n";
        }
    }
}