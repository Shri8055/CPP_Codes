#include<iostream>
#include<climits>
using namespace std;
int main() {
    int i,b,min,smin;
    cout<<"Enter size of array: ";
    cin>>b;
    
    int a[b];
    cout<<"Enter array numbers: ";
    for(i=0;i<b;i++){
        cin>>a[i];
    }
    cout<<"Array numbers are: ";
    for(i=0;i<b;i++){
        cout<<" "<<a[i];
    }
    min=a[0];
    smin=INT_MAX;
    for(i=1;i<b;i++){
        if(a[i]<min){
            smin=min;
            min=a[i];
        }else if(a[i]<smin && a[i]!=min){
            smin=a[i];
        }
    }
    cout<<endl<<"Minimum number in array: "<<min;
    if(smin!=INT_MAX){
        cout<<endl<<"Second minimum number in array: "<<smin;
    }else{
        cout << endl << "There is no second minimum number in array.";
    }
}