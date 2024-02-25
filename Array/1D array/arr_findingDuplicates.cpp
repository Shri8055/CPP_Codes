#include<iostream>
using namespace std;
int main() {
    int b,c,i,j,count=1;
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
    for(i=0;i<b;i++){
        for(j=i+1;j<b;j++){
            if(a[i]==a[j]){
                count++;
                c=a[i];
                break;
            }
        }
    }
    cout<<endl<<"Number "<<c<<" repeats for "<<count<<" times";
}
