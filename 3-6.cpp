#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double oyr=0.025,tyr=0.028,currentRate=0.012;
    double balance,interest;
    int startYear,endYear,type;
    cout<<"Enter the number of years:";
    cin>>type;
    cout<<"Enter your intial deposit:";
    cin>>balance;
    cout<<"Enter the start year and the end year:";
    cin>>startYear>>endYear;

    switch(type){

        case 0:interest=(pow(1+currentRate,endYear-startYear)-1)*balance;break;
        case 1:interest=(pow(1+oyr,endYear-startYear)-1)*balance;break;
        case 2:interest=(pow(1+tyr,endYear-startYear)-1)*balance;break;
    }
cout<<"The interest you will earn is:"<<interest<<endl;
    return 0;
}