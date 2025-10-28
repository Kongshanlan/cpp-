#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number_one,number_one_mirror,k,p,number_two,temp;
    cin>>number_one;
    int number1[10]={0};
    number_one_mirror=abs(number_one);
    for(int i=0;i<10;i++){
        k=pow(10,i+1);
        p=pow(10,i);
        number1[i]=(number_one_mirror%k)/p;
    }
    if(number1[9]!=0) temp=9;
    else for(int m=1;m<10;m++){
        if(number1[m]==0&&number1[m-1]!=0) temp=m-1;
    }
    for(int x=0;x<=temp;x++){
    number_two+=number1[x]*pow(10,temp-x);
}
if(number_two<0){
    cout<<"0"<<endl;
}
else if(number_one<0){
    cout<<"-"<<number_two<<endl;
}
else{
    cout<<number_two<<endl;
}
return 0;
}