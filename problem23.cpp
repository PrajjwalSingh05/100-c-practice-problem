#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"ENter the value of Number 1";
    cin>>num1;
    cout<<"Enter the value of Number 2";
    cin>>num2;
    cout<<"Number before swaping are "<<num1<<","<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    cout<<"Number After swaping are "<<num1<<","<<num2<<endl;

}