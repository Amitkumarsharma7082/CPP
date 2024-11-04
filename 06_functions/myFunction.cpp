// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : " << endl;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cout<<"babbar"<<endl;
//     }
// }

#include<iostream>
using namespace std;
void printNum(int a){
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
}
int main(){
    int a=5;
    printNum(a);
    cout<<"A main : "<< a <<endl;
}