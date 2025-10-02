#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cin>>a>>b>>op;
    switch(op){
    case '+':cout<<a+b<<endl;break;
    case 45:cout<<a-b<<endl;break;
    case 42:cout<<a*b<<endl;break;
    case 47:if(b==0) cout<<"Wrong"<<endl;
        else cout<<a/b<<endl;break;
    case 37:if(b==0) cout<<"Wrong"<<endl;
        else cout<<a%b<<endl;
        break;}
      return 0;

}