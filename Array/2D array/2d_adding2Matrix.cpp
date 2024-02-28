#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter row size:  ";
    cin>>r;
    cout<<"Enter col size:  ";
    cin>>c;
    int a[r][c],b[r][c];
    cout<<"Enter "<<r*c<<" numbers of 1st 2d array:  ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter "<<r*c<<" numbers of 2nd 2d array:  ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Numbers of 1st 2d array are:  "<<endl;
    for(i=0;i<r;i++){
        cout<<"[ ";
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
    cout<<"Numbers of 2nd 2d array are:  "<<endl;
    for(i=0;i<r;i++){
        cout<<"[ ";
        for(j=0;j<c;j++){
            cout<<b[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
    cout<<"Sum of 2st and 2nd 2d array are:  "<<endl;
    for(i=0;i<r;i++){
        cout<<"[ ";
        for(j=0;j<c;j++){
            a[i][j]+=b[i][j];
            cout<<a[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
}