#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int a,b,i,j,n;
    cout<<"Enter vector size:   ";
    cin>>a;
    cout<<"Enter vector numbers:    ";
    for(i=0;i<a;i++){
        cin>>b;
        v.push_back(b);
    }
    cout<<"Enter Target:    ";
    cin>>n;
    cout<<"Enter vector numbers:    ";
    for(i=0;i<a;i++){
        cout<<v[i]<<" ";
    }
    for(i=0;i<v.size();i++){
        for(j=i+1;j<v.size();j++){
            if(v[i]+v[j]==n){
                cout<<endl<<"("<<i<<","<<j<<")";
            }
        }
    }
}