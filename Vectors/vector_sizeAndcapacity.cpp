#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(3);
    cout<<"Size: "<<v.size();
    cout<<", Capacity: "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"Size: "<<v.size();
    cout<<", Capacity: "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"Size: "<<v.size();
    cout<<", Capacity: "<<v.capacity()<<endl;
}