#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int num1,num2,op,result1,result2;
    num1=rand()*10/(RAND_MAX+1);
    num2=rand()*10/(RAND_MAX+1);
    op=rand()*4/(RAND_MAX+1);
    switch(op){
        case 0:cout<<num1<<"+"<<num2<<"=?";
        cin>>result1;
        if(num1+num2==result1)cout<<"Right";
        else cout<<"Wrong\n";break;
        case 1:cout<<num1<<"-"<<num2<<"=?";
        cin>>result1;
        if(num1+num2==result1)cout<<"Right";
        else cout<<"Wrong\n";break;
        case 2:cout<<num1<<"*"<<num2<<"=?";
        cin>>result1;
        if(num1*num2==result1)cout<<"Right";
        else cout<<"Wrong\n";break;
        case 3:cout<<num1<<"/"<<num2<<"=?";
        cout<<"Enter the integer part and remainder:";
        cin>>result1>>result2;
        if((num1/num2==result1)&(num1%num2==result2))cout<<"Right";
        else cout<<"Wrong\n";break;
    }
    return 0;
}
