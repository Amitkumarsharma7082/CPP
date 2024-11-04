#include<iostream>
using namespace std;

void findEvenOdd(int n){
    if(n%2==0){
        cout<< "Even "<< endl;
    }
    else {
        cout<<"Odd "<< endl;
    }
}
int main(){
    int n;
    cout<< "Enter the value : "<< endl;
    cin>>n;

    findEvenOdd(n);
}