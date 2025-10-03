#include <iostream>
using  namespace std;
int main()
{
    int Year,Month,Day,loop(0),dayNum;
    cin>>Year>>Month>>Day;
    if(Year%4==0&&(Year%100)!=0) loop++;
    else if(Year%400==0) loop++;
    else loop=0;
    if(Month<=2) dayNum=31*(Month-1)+Day;
    else {dayNum=31*(Month-1)+Day-(4*Month+23)/10;
    if(loop==1) dayNum=dayNum+1;
    }
    if(Month==2&&Day==29){
        if(loop==0) cout<<"Illegal"<<endl;
        else cout<<dayNum<<endl;
    }
    return 0;
}