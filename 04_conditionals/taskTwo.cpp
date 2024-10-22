#include<iostream>

using namespace std;

int main(){
    int hours;

    cout<<"Enter shop timing : "<< endl;
    cin>> hours;

    if (hours >=8 && hours <= 18) {
        cout<<" Shop is OPEN! "<< endl;
    } else {
        cout<<" Shop is CLOSED! "<< endl;
    }
}