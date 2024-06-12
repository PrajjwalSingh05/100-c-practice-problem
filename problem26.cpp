#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;
    cout<<"Enter the Number:";
    cin>>num;
    for(int i=2;i<=num;i++)
    {
        fact=fact*i;

    }
    cout<<"Factorial of "<<num<<"is:"<<fact;
    return 0;
}