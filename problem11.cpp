#include<iostream>
using namespace std;
int main()
{
    int principal,rate,time;
    cout<<"Enter the principal amout";
    cin>> principal;
    cout<<"Enter the rate"<<endl;
    cin>>rate;
    cout<<"Enter the time "<<endl;
    cin>>time;
    float si=(principal*time*rate)/100;
    cout<<"simple Interest is :"<<si<<endl;
    return 0;
}