#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int i,n;
    double sum;
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=1/i;
    }
    cout<<setprecision(6)<<fixed;
    cout<<sum<<endl;
return 0;
}