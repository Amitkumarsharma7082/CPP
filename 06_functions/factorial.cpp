#include<iostream>
using namespace std;

int fact(int n){
    int ans =1;
    for(int i=n;i>1;i--){
        ans = ans*i;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value to find Factorial : "<< endl;
    cin>>n;

    int ans = fact(n);
    cout<< "Result : " << ans << endl;
}