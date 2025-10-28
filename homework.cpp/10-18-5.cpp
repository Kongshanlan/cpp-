#include <iostream>
using namespace std;
int main(){
    int year,leap_year,month,day,day_of_num(0),leap(0),dayNum;
    cin>>year>>month>>day;
    leap_year=(year+2-1990)/4;
    day_of_num=365*(year-1990)+leap_year;
    if(year%4==0&&(year%100)!=0) leap++;
    else if(year%400==0) leap++;
    else leap=0;
    if(month<=2) dayNum=31*(month-1)+day;
    else {dayNum=31*(month-1)+day-(4*month+23)/10;
    if(leap==1) dayNum=dayNum+1;
    }
    day_of_num+=dayNum;
    if(day_of_num%5>=4) cout<<"Sleeping"<<endl;
    else cout<<"Fishing";
    return 0;
}