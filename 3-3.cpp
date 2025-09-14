#include<iostream>
using namespace std;
int main()
{
    int year;
    bool result;
    cout<<"enter a year:";
    cin>>year;
    result=(year%4==0&&year%100!=0)||year%400==0;
    if(result)
    cout<<year<<"is a leap year"<<endl;
    else cout<<year<<"is not a leap year"<<endl;
    return 0;
}