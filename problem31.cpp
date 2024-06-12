#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
    {
        for(int k=1;k<=4;k++)
    {
        for(int z=1;z<=4;z++)
    {
        if(i!=j && i!=k &&i!=z)
        {
            cout<<i<<","<<j<<","<<k<<","<<z<<endl;
        }
        
    }
        
    }
        
    }

    }
}