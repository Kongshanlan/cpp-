#include<iostream>
using namespace std;
int main(){
    int varible,NumOfInt,i(0),total(0);
    cout<<"How many integers do you want to process?";
    cin>>NumOfInt;
    for(i;i<NumOfInt;++i){
        cout<<"Enter an integer:";
        cin>>varible;
        total+=varible;
 }
    cout<<"The sum is:"<<total<<endl;
    cout<<"The average is:"<<(total*1.0)/NumOfInt<<endl;
    return 0;
}