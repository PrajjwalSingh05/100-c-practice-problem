#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,copy;
    int sum=0;
    cout<<"ENter num";
    cin>>num;
    copy=num;
    while(copy>0)
    {
        int rem=copy%10;
        sum=sum+(pow(rem,3));
        copy=copy/10;
    }
    if(num==sum)
    {
        cout<<"Entered number is Armstrong";

    }
    else{
        cout<<"Not aramstrong ";
    }
    return 0;

}