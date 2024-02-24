#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(13);
    v.push_back(16);
    v.push_back(19);
    v.push_back(23);
    v.push_back(26);
    v.push_back(29);
    v.push_back(33);
    v.push_back(36);
    v.push_back(39);
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
    cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<" "<<v[i];
    }
}