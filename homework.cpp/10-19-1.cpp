#include<iostream>
using namespace std;
int main(){
    int number(0),number_one,number_two,option(0);
    double n1(1);
    cin>>number;
    for(int i=0;i<=(number/2);i++){
        number_two=i;
        number_one=number-2*number_two;
        cout<<number_one<<" "<<number_two<<endl;
        if(number_one==0||number_two==0){
            option++;
        }
        else{
        for(int j=0;j<number_two;j++){
            n1=n1*(number_one+number_two-j)/(j+1);
        }
    option+=n1+0.000001;
    } 
    n1=1;
    cout<<"*"<<option<<endl;
    }
cout<<option<<endl;
return 0;
}