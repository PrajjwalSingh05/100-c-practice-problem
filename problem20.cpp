#include<iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"Enter the salary in Lakh";
    cin>>salary;
    float hra=salary*0.1;
    float da=salary*0.05;
    float pf=salary*0.03;
    float tax=0;
    if(salary>=5 && salary<=10)
    {
        tax=salary*0.1;

    }
    else if(salary>=11 &&  salary<20)
    {
        tax=salary*0.2;
    }
    else if (salary>=20){
        tax=salary*0.3;
        
    }
    float total_deduction=hra+pf+da+tax;
    cout<<"Salary left after deduction is "<<salary-total_deduction;

}