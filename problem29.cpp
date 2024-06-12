#include<iostream>
using namespace std;
bool isarm(int num)
{
    int temp=num;
    int sum=0;
    while(temp>0)
    {
        int rem=temp %10;
        sum=sum+rem*rem*rem;
        temp=temp/10;

    }
    if(sum==num)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    for(int i=100;i<1000;i++)
    {
        if(isarm(i))
        {
            cout<<"The number "<<i<<"is aramstrong"<<endl;
        }
    }

}