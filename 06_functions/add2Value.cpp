#include<iostream>
using namespace std;

int getSum(int a, int b){
    int ans = a + b;
    return ans;
}

int main(){
    int a;
    cout<<"Enter the value a : " << endl;
    cin>>a;
    int b;
    cout<<"Enter the value of b : " << endl;
    cin>>b;

    int sum = getSum(a,b);
    cout << "Sum of two values : "<< sum << endl;
}