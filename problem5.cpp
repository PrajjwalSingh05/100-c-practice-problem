#include<iostream>
using namespace std;
int main()
{
    int num;
    int newnum=0;
    int copy=num;
    cout<<"Enter 3 digit";
    cin>> num;
    while(num!=0)
    {
        int rem=num%10;
        newnum=newnum*10+rem;
        num=num/10;
            }
    cout<<"New number is "<<newnum<<endl;
    if(copy==newnum)
    {
        cout<<"Reverse is true";
    }
    else{
        cout<<"Not true";
    }
    return 0;
}