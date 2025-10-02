//四点共圆问题的解决
#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    double x0,y0,R1,R2,k1(0),b1,k2(0),b2;
    cout<<"Enter the coordinates of the four points:"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(y1==y2&&y2==y3){
        cout<<"Wrong"<<endl;
    }
    else{
    if(y1==y2){
       x0=0.5*(x1+x2);
       k2=-1.0*(x2-x3)/(y3-y2);
       b2=0.5*(x3*x3+y3*y3-x2*x2-y2*y2)/(y3-y2);
       y0=-k2*x0+b2;
    }
    else {if(y3==y2){
        x0=0.5*(x3+x2);
       k1=-1.0*(x2-x1)/(y1-y2);
       b1=0.5*(x1*x1+y1*y1-x2*x2-y2*y2)/(y1-y2);
       y0=-k1*x0+b1;
    }   
          else {
          k2=-1.0*(x2-x3)/(y3-y2);
          k1=-1.0*(x2-x1)/(y1-y2);
          //计算机处理数据时有误差，考虑到数据不会太大，进行误差判断代替相等判断。
          if((k1-k2)*(k1-k2)<0.0000001){
            cout<<"Wrong"<<endl;
          }
        else{
       b2=0.5*(x3*x3+y3*y3-x2*x2-y2*y2)/(y3-y2);
       b1=0.5*(x1*x1+y1*y1-x2*x2-y2*y2)/(y1-y2);
       x0=1.0*(b2-b1)/(k2-k1);
       y0=1.0*(b1*k2-b2*k1)/(k2-k1);
        }
    }
       R1=(x1-x0)*(x1-x0)+(y1-y0)*(y1-y0);   
       R2=(x4-x0)*(x4-x0)+(y4-y0)*(y4-y0);
       if((R1-R2)*(R1-R2)<0.0000001){
        cout<<"Yes"<<endl;
       }
       else cout<<"No"<<endl;
    }
}
       return 0;
    
}