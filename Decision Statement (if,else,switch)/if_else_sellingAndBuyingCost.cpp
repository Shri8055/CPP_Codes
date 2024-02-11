#include<iostream>
using namespace std;
int main(){
    int sell_prize,cost_prize;
    cout<<"Enter Selling Prize:    ";
    cin>>sell_prize;
    cout<<"Enter Cost Prize:    ";
    cin>>cost_prize;
    if(sell_prize>=cost_prize){
        cout<<"Seller has made PROFIT of: "<<sell_prize-cost_prize<<".";
    }
    else{
        cout<<"Seller has made LOSS of: "<<cost_prize-sell_prize<<"!!!";
    }
}