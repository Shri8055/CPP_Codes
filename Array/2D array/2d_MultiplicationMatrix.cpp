#include<iostream>
using namespace std;
int main(){
    int r,c,r1,c1,i,j,k;
    cout<<"Enter rows of 1st Matix:  ";
    cin>>r;
    cout<<"Enter cols of 1st Matix:  ";
    cin>>c;
    cout<<endl<<"Enter rows of 2nd Matix:  ";
    cin>>r1;
    cout<<"Enter cols of 2nd Matix:  ";
    cin>>c1;
    if(c==r1){
        int a[r][c],b[r1][c1];
        cout<<endl<<"Enter "<<r*c<<" numbers of 1st matrix:  ";
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cin>>a[i][j];
            }
        }
        cout<<endl<<"Enter "<<r1*c1<<" numbers of 2nd matrix:  ";
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                cin>>b[i][j];
            }
        }
        cout<<endl<<"Numbers of 1st matrix:  "<<endl;
        for(i=0;i<r;i++){
            cout<<"[ ";
            for(j=0;j<c;j++){
                cout<<a[i][j]<<" ";
            }cout<<"]";
            cout<<endl;
        }
        cout<<endl<<"Numbers of 2nd matrix:  "<<endl;
        for(i=0;i<r1;i++){
            cout<<"[ ";
            for(j=0;j<c1;j++){
                cout<<b[i][j]<<" ";
            }cout<<"]";
            cout<<endl;
        }
        int c[r][c1];
        for(i=0;i<r;i++){
            for(j=0;j<c1;j++){
                c[i][j]=0;
                for(k=0;k<r1;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"Matrix after Multiplication:  "<<endl;
        for(i=0;i<r;i++){
            cout<<"[ ";
            for(j=0;j<c1;j++){
                cout<<c[i][j]<<" ";
            }cout<<"]";
            cout<<endl;
        }
    }
    else{
        cout<<"The matrices cant be multiplied";
    }
}