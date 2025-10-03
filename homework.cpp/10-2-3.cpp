#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    float x1,x2,y1,y2,area,length,width,op(0);
    cin>>x1>>y1>>x2>>y2;
    length=abs(x1-x2);
    width=abs(y1-y2);
    area=length*width;
    if(area<=0.0000001) cout<<"不存在对应的矩形"<<endl;
    else {if(abs(length-width)<=0.0000001) op++;
    cout<<setprecision(5)<<fixed;
    if(op==1) cout<<area<<" "<<"是正方形"<<endl;
    else cout<<area<<" "<<"不是正方形"<<endl;
    }
    return 0;
}