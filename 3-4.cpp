#include<iostream>
#include<cmath>
using namespace std;
  int main()
{
    double a,b,c,x1,x2,dlt;
    cout<<"enter a,b,c:";
    cin>>a>>b>>c;
    dlt=b*b-4*a*c;
    if(a==0)
     if(b==0) cout<<"no solution"<<endl;
     else cout<<"x="<<-c/b<<endl;
    else if(dlt>0)
    {
        x1=(-b+sqrt(dlt))/(2*a);
        x2=(-b-sqrt(dlt))/(2*a);
        cout<<"x1="<<x1<<"x2="<<x2<<endl;
    }
    else if(dlt==0)
    {
        x1=-b/(2*a);
        cout<<"x1=x2="<<x1<<endl;
    }
    else cout<<"no real solution"<<endl;
return 0;
}


