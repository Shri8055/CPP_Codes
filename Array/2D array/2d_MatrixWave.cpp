#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter row size:  ";
    cin>>r;
    cout<<"Enter col size:  ";
    cin>>c;
    int a[r][c];
    cout<<"Enter "<<r*c<<" number of 2d array:  ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Number of 2d array are:  "<<endl;
    for(i=0;i<r;i++){
        cout<<"[ ";
        for(j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }cout<<"]";
        cout<<endl;
    }
    for(i=0;i<r;i++){
        if(i%2==0){
            for(j=0;j<c;j++){
                cout<<a[i][j]<<" -> ";
            }
        }
        else{
            for(j=c-1;j>=0;j--){
                cout<<a[i][j]<<" -> ";
            }
        }
    }
}