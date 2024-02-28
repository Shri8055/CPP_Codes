#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    cout<<"Enter row size:  ";
    cin>>r;
    cout<<"Enter col size:  ";
    cin>>c;
    int a[r][c];
    cout<<"Enter "<<r*c<<" Numbers:    ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"2d array numbers are:    "<<endl;
    for(i=0;i<r;i++){
        cout<<"[ ";
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
    int max=a[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    cout<<"Maximum number from 2d Array is:    "<<max;
}