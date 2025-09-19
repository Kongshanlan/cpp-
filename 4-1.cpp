#include<iostream>
#include<cmath>
using namespace std;
int main(){
    const double rate1year=0.025,rate2year=0.028,currentRate=0.012;
    double balance,interest;
    int startYear,endYear,type,i;
    for(i=0;i<10;++i){
        cout<<"Enter the sart year,end year initial balance and type(0,1or2)"<<endl;
        cin>>startYear>>endYear>>balance>>type;
        switch(type){
            case0:interest=pow(1+currentRate,endYear-startYear)*balance-balance;break;
            case1:interest=pow(1+rate1year,endYear-startYear)*balance-balance;break;
            case2:interest=pow(1+rate2year,endYear-startYear)*balance-balance;break;
        }
        cout<<"The interest is"<<interest<<endl;

    }
    return 0;
}  