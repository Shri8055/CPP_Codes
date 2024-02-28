#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter row size:  ";
    cin>>r;
    cout<<"Enter col size:  ";
    cin>>c;
    int a[r][c];
    cout<<"Enter "<<r*c<<" numbers of 1st 2d array:  ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Numbers of 2d array are:  "<<endl;
    for(i=0;i<r;i++){
        cout<<"[ ";
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
    int t[c][r];
    cout<<"Transpose of 2d array are:  "<<endl;
    for(j=0;j<c;j++){
        cout<<"[ ";
        for(i=0;i<r;i++){
            t[i][j]=a[i][j];
            cout<<t[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
}