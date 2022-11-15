#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"ENter number";
    cin >>num1;
    cout<<"ENter number";
    cin >>num2;
    num2=num2+num1;
    num1=num2-num1;
    num2=num2-num1;
    cout<<num1<<","<<num2<<endl;
    return 0;

}