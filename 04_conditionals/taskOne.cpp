#include<iostream>
#include<string>
using namespace std;
int main(){
    string teaOrder;
    cout<< "What do you want to order ? "<< endl;

    getline(cin, teaOrder);

    if(teaOrder == "Green Tea"){
        cout<< "Your order confirm "<< endl;
    }
    return 0;
}