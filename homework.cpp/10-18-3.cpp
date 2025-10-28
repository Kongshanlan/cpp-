#include<iostream>
using namespace std;
int main(){
    int change,m1,m2,m3,temp1,temp2,i,j,option(0),num_of_coin(10000),current_coin;
    cin>>change>>m1>>m2>>m3;
    for(i=0;i<=change/m3;i++){
        temp1=change-i*m3;
        for(j=0;j<=temp1/m2;j++){
            temp2=temp1-m2*j;
            if((temp2%m1)==0){
            option++;
            current_coin=i+j+temp2/m1;
            num_of_coin=(num_of_coin<current_coin)?num_of_coin:current_coin;
            }
            else continue;
        }
    }
    if(option==0) cout<<"False"<<endl;
    else cout<<"True"<<" "<<num_of_coin<<endl;
    return 0;
}