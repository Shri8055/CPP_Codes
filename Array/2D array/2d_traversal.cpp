#include<iostream>
using namespace std;
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
    cout<<"2D array numbers are:    "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<" a["<<i<<"]"<<"["<<j<<"]="<<" "<<a[i][j]<<",";
        }cout<<endl;
    }
}