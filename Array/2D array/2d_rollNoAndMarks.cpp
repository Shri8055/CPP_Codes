#include<iostream>
using namespace std;
int main(){
    int i,j,r,c;
    int a[2][4];
    cout<<"Enter total students:    ";
    cin>>r;
    cout<<"Enter student roll no 1st and marks 2nd:  ";
    for(i=0;i<2;i++){
        for(j=0;j<r;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<r;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}