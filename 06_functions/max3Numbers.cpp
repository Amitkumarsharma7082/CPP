#include<iostream>
using namespace std;

int findMax(int a, int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return a;
    }
    else {
        return c;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int maxNum = findMax(a,b,c);
    cout<<"Maxium number : " << maxNum <<endl;
}