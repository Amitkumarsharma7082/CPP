#include<iostream>
using namespace std;
int main(){
    // int n = 528;
    // while(n!=0){
    //     int rem = n%10;
    //     cout<< rem << " ";
    //     n = n/10;
    // }
    // cout<<endl; 
    int digit[] = {8,2,3,7};
    int ans = 0;

    for(int i =0;i<4;i++){
        ans = ans*10+digit[i];
    }
    cout<< ans << endl; // 8237

    return 0;
}