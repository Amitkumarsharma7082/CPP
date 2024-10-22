#include<iostream>

using namespace std;

int main(){
    int cups;
    double pricePerCup = 2.5, totalPrice, discount;
    cout<<"Enter your cups : "<< endl;
    cin>>cups;

    totalPrice = pricePerCup * cups;
    // cout<<"1 total price " << totalPrice <<endl;

    if(cups>20){
        discount = 0.20;
    } else if(cups >=10 && cups <=20) {
        discount = 0.10;
    } else {
        discount = 0;
    }
totalPrice -= totalPrice * discount;
cout<< "Total Price : "<< totalPrice << endl; 

return 0;
}