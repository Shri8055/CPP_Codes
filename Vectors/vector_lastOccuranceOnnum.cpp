#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(4);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    int a,idx=-1;
    cout<<endl<<"Enter number u want to find:  ";
    cin>>a;
    for(int i=0;i<v.size();i++){
        if(v[i]==a){
            idx=i;
        }
    }
    cout<<"Number occured on "<<idx+1<<" position.";
}