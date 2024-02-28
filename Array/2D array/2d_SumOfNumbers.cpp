#include<iostream>
using namespace std;
int main(){
    int r,c,i,j,sum=0;
    cout<<"Enter row size:  ";
    cin>>r;
    cout<<"Enter col size:  ";
    cin>>c;
    int a[r][c];
    cout<<"Enter "<<r*c<<" 2d array numbers:    ";
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
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum+=a[i][j];
        }
    }
    cout<<"Sum of array numbers is:  "<<sum;
}