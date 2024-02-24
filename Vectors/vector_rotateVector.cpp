#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
void reversePart(int x,int y,vector <int> &v){
    int i,j;
    for(i=x,j=y;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main(){
    vector <int> v;
    int i,j,k,n;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    display(v);
    cout<<"Enter k:  ";
    cin>>k;
    n=v.size();
    if(k>n){
        k=k%n;
    }
    reversePart(0,n-1-k,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}