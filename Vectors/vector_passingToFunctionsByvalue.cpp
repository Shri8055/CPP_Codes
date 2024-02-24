#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> v){
    cout<<endl;
    v[0]=2;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    v.push_back(9);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    display(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}