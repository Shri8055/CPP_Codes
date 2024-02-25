#include<iostream>
using namespace std;
void display(int arr[],int size){
    cout<<"Array numbers are:  ";
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}
int main(){
    int b,c,i,size;
    cout<<"Enter array size:    ";
    cin>>b;
    int a[b];
    cout<<"Enter array numbers:  ";
    for(i=0;i<b;i++){
        cin>>a[i];
    }
    size=sizeof(a)/sizeof(a[0]);
    display(a,size);
}