#include<iostream>
using namespace std;
int main(){
    int cups;
    cout<< "How many cups you have ? "<< endl;
    cin>>cups;

    if(cups>=20) {
        cout<<"Gold Badge" << endl;
    } else if(cups >= 10 && cups < 20) {
        cout<< "Silver Badge"<< endl;
    } else {
        
        cout<< "No Badge for you"<<endl;
    }

    return 0;
}
//cups greater than 10 and cups less than 20