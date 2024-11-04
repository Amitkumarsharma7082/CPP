#include<iostream>
using namespace std;

char findGrade(int marks){
    switch(marks/10){
        case 10: return 'A'; break;
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        default: return 'D'; 
    }
}
int main(){
    // int n;
    // cout<< "Enter the marks : "<< endl;
    // cin>>n;

    // char grade = findGrade(n);
    // cout<< " Final Result : " << grade << endl;
    for(int i=1;i<=100;i++){
        char grade = findGrade(i);
        cout<< "Number : "<< i << "is " << grade << endl;
    }
}