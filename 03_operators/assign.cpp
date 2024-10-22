#include<iostream>
using namespace std;
int main(){
    int teaBags;

    cout<< "Enter the number of tea bags : "<< endl;

    cin>>teaBags;

    if(teaBags<10){
        teaBags += 5;
    }
    cout<<"Value : " << teaBags << endl;
}