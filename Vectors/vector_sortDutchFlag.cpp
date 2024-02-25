#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector <int> v;
    int lo,hi,md;
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);
    display(v);
    lo=0;
    md=0;
    hi=v.size()-1;
    while(md<=hi){
        if(v[md]==2){
            int temp=v[md];
            v[md]=v[hi];
            v[hi]=temp;
            hi--;
        }
        if(v[md]==0){
            int temp=v[md];
            v[md]=v[lo];
            v[lo]=temp;
            lo++;
            md++;
        }
        if(v[md]==1){
            md++;
        }
    }
    cout<<endl;
    display(v);
}