#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for(int i=0;i<5;i++){
        cout<<v.at(i)<<" ";
    }
    v.at(2)=9;
    cout<<endl<<"Updating value using 'at':    ";
    for(int i=0;i<5;i++){
        cout<<v.at(i)<<" ";
    }
    sort(v.begin(),v.end());
    cout<<endl<<"After using sort:    ";
    for(int i=0;i<5;i++){
        cout<<v.at(i)<<" ";
    }
}