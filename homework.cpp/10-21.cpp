#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m,n,dif=0;
    int digit_m[32]={0},digit_n[32]={0};
    bool flag=0;
    cin>>m>>n;
    for(int i=0;i<32;i++){
        digit_m[i]=m%2;
        m=m/2;
        if(m==0) break;
    }
    for(int j=0;j<32;j++){
        digit_n[j]=n%2;
        n=n/2;
        if(n==0) break;
    }
    for(int k=0;k<32;k++){
        if(digit_m[k]!=digit_n[k]) dif++;
    }
    cout<<dif;
    return 0;
}