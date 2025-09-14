#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double oyr=0.025,tyr=0.028;
    double balance,interest;
    int type,startDate,endDate;
    cout<<"enter the typr of account(2 or 1):";
    cin>>type;
    cout<<"enter the start date and end date:";
    cin>>startDate>>endDate;
    cout<<"enter the balance:";
    cin>>balance;
    if(type==1)
        interest=pow(1+oyr,endDate-startDate)*balance-balance;
    else    
        interest=pow(1+tyr,endDate-startDate)*balance-balance;
    cout<<"your interst is"<<interest<<endl;
    return 0;
}