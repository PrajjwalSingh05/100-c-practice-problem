#include<iostream>
using namespace std;
bool isprime(int num)
{
    if(num==1 || num==0)
    {
        return false;
    }
    for(int i=2;i<num;i++)
    {
        if(num %i==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
int num;
cout<<"Enter the number";
cin>>num;

   
    if(isprime(num))
    {
        cout<<"The number "<<num<<"is Prime"<<endl;
    }
    else{

        cout<<"The number "<<num<<"is Not  Prime"<<endl;
    }

    return 0;
}