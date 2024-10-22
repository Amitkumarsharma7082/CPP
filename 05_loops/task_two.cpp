// do while
#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;
    do {
        cout<<"Do you want more tea (yes/no)"<<endl;
        getline(cin, response);
        // jab tak no ni aajata
    } while (response != "no" || response != "No");
    
}