#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main(){
    vector <int> v;
    int i,j;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    display(v);
    i=0;
    j=v.size()-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
        if(v[i]==1&&v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    display(v);
}