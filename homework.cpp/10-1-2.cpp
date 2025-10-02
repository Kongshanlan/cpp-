#include <iostream>
#include<cmath>
using  namespace std;
int main()
{
    int number1,number2,x1(0),x2(0),x3(0),x4(0),output1,output2,i,x,y;
    //定义变量，其中x1到x4用于取各位上的数
    cin>>number1>>number2;
for(i=4;i>1;){
       x=pow(10,i);
       y=pow(10,i-1);
       if(i==4)x1=(number1%x-number1%y)/y;
       else x3=(number1%x-number1%y)/y;
       i=i-2;
    }
    x1=(x1+7)%10;
    x3=(x3+7)%10;
    //对奇数位操作
    for(i=3;i>0;){
       x=pow(10,i);
       y=pow(10,i-1);
       if(i==3) x2=(number1%x-number1%y)/y;
       else x4=(number1%x-number1%y)/y;
       i=i-2;
    }
    x2=(x2+7)%10;
    x4=(x4+7)%10;
    cout<<x2<<x4<<endl;
    //对偶数位操作
    output1=x1*10+x2+x3*1000+x4*100;
for(i=4;i>0;){
       x=pow(10,i);
       y=pow(10,i-1);
       if(i==4) x1=(number2%x-number2%y)/y;
       else x3=(number2%x-number2%y)/y;
       i=i-2;
    }
    x1=(x1+3)%10;
    x3=(x3+3)%10;
    for(i=3;i>0;){
       x=pow(10,i);
       y=pow(10,i-1);
       if(i==3)x2=(number2%x-number2%y)/y;
       else x4=(number2%x-number2%y)/y;
       i=i-2;
    }
    x2=(x2+3)%10;
    x4=(x4+3)%10;
    output2=x1*10+x2+x3*1000+x4*100;
    cout<<output1<<" "<<output2<<endl;
    return 0;
}