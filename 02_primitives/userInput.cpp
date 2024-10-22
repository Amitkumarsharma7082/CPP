#include<iostream>
#include<string>
using namespace std;

int main(){
    string userTea;
    int teaQuantity;
    cout<< "What would like to order in tea? \n";
    // getline two input
    getline(cin, userTea);

    // ask for quantity
    cout<< "How many cups of " << userTea << "woulf you like to have ? "<< endl;
    cin >> teaQuantity;

    cout << teaQuantity << endl;;
    cout<< userTea << endl;
    return 0;
}