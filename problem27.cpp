#include<iostream>
using namespace std;
bool isprime(int num)
{
    if(num %2==0)
    {
        return false;
    }
    else{
        return true;
    }

}
int main()
{
int num=25;
for(int i=0;i<num;i++)
{
   
    if(isprime(i))
    {
        cout<<"The number "<<i<<"is odd"<<endl;
    }
}
    return 0;
}