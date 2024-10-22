#include<iostream>

using namespace std;

int main(){
    int teaLeaves = 50;
    float waterTemperature = 85.5; // 85.588585 > 85.588
    double priceOfTea = 299.99; // 299.999998989 > 300
    char teaGrade = 'A';
    bool isTeaReady = false;

    cout<< " Tea Grade : " << priceOfTea << endl; // output : 1 char is also treat as true


    return 0;
}