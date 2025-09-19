#include<iostream>
using namespace std;
int main(){
    int a,b,result1,result2;
    cout<<"Enter two integers:";
    cin>>a>>b;
    if(b==0) cout<<"Wrong";
    else{
        result1=a/b;
        result2=a%b;
        cout<<"The integer part is"<<result1<<endl;
        cout<<"The remainder is"<<result2<<endl;

    }
return 0;
}
