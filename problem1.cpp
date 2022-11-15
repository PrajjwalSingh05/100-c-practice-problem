#include<iostream>
using namespace std;

int main(){
    int age1,age2,age3;
    cout<<"Enter First age";
    cin >>age1;
    cout<<"Enter  age";
    cin >>age2;
    cout<<"Enter  age";
    cin >>age3;
    if(age1>age2 && age2>age3){
        cout<<"Age1 is greatest"<<age1<<endl;
     }
    else if(age2>age3 && age2>age1){
        cout<<"Age2 is greatest"<<age2<<endl;
    }
    else{
        cout<<"Age 3 is greatest"<<age3<<endl;
    }
    return 0;
}