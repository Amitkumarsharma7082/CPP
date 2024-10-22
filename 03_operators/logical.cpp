#include<iostream>
using namespace std;
int main(){
    int cups;
    bool isStudent;

    cout<<"Are you student (1 for yes or 0 for no)";
    cin>>isStudent;

    cout<<"How many cups do you have ? "<< endl;
    cin>>cups;

    if(isStudent || cups >= 15){
        cout<<"You are elegible for a discount"<<endl;
    } else {
        cout<<"You are elegible for a discount"<<endl;
    }
}