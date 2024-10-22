#include<iostream>

using namespace std;

int main(){
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice; // Output : 49

    int teaQuantity = 2;
    double totalPrice = teaPrice * teaQuantity;
    
    cout<< "value : "<<  totalPrice<< endl;
    return 0;
}