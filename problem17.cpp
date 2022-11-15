#include<iostream>
using namespace std;
int main()
{
    int num;
    int newnum=0;
    cout<<"Enter the 3 digit number";
    cin>>num;
    while(num>0)
    {
        int rem=num%10;
        newnum=newnum+(rem*rem);
        num=num/10;
        
    }
    cout<<"The square additio o fnumber is :"<<newnum<<endl;
    return 0;
}