#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void reversePart(int x,int y,vector <int> &a){
    int i,j;
    for(i=x,j=y;i<=j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main(){
    vector <int> v;
    int i,j;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    display(v);
    cout<<"Enter start and end point to reverse:    ";
    cin>>i>>j;
    reversePart(i,j,v);
    cout<<"Vector after reverse:    ";
    display(v);
}