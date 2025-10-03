#include<iostream>
using namespace std;
int main(){
    int year,month,day,leap(0),dayNum;
    cin>>year>>month>>day;
    if(year%4==0&&year%100!=0||year%400==0) leap=1;
    else leap=0;
    if(month<=2) dayNum=dayNum=31*(month-1)+day;
    else dayNum=31*(month-1)+day-((4*month+23)/10)+leap;
    if(month==2&&day==29&&leap==0) cout<<"Illegal";
    else{
        if(day==31&&(month==4||month==6||month==9||month==11)) cout<<"Illegal";
        else if(day>31) cout<<"Illegal";
        else if(month>12) cout<<"Illegal";
        else {if(leap==1&&month>2) dayNum++;
        cout<<dayNum;
        }
        return 0;
    }
}