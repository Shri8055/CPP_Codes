#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter row size:  ";
    cin>>r;
    cout<<"Enter col size:  ";
    cin>>c;
    int a[r][c];
    cout<<"Enter "<<r*c<<" numbers in 2d array:  ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Numbers in 2d array are:  "<<endl;
    for(i=0;i<r;i++){
        cout<<"[ ";
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
    cout<<"2d array numbers after rotating to 90 deg are:  "<<endl;
    for(i=0;i<r;i++){
        for(j=c-1;j>=0;j--){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}