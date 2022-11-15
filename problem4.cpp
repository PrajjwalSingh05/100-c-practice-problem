#include<iostream>
using namespace std;
int main()
{
    int num;
    int newnum=0;
    cout<<"Enter 3 digit";
    cin>> num;
    while(num!=0)
    {
        int rem=num%10;
        newnum=newnum*10+rem;
        num=num/10;
            }
    cout<<"New number is "<<newnum<<endl;
    return 0;
}