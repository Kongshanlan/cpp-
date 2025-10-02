#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,s,area;
    cin>>a>>b>>c;
    if(a<b+c&&a*a>(b-c)*(b-c)){
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<setprecision(6)<<fixed;
    cout<<area<<endl;
    }
    else cout<<"这三条线段不能组成三角形"<<endl;
    return 0;
}