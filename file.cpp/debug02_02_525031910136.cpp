#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    int quantity,yuan,jiao;
    double charge;
    cout<<"请输入本月用电量（度）：";
    cin>>quantity;
    charge=0.6*quantity;
    cout<<"本月应缴电费："<<charge<<"元"<<endl;
    cout<<endl;
    cout<<"charge="<<setprecision(16)<<charge<<endl;
    yuan=(int)charge;
    cout<<endl;
    cout<<"(charge-yuan)*10="<<((charge-yuan)*10)<<endl;
    jiao=(charge-yuan)*10+0.1;
    cout<<endl;
    cout<<"共需要"<<yuan<<"个1元和"<<jiao<<"个1角的硬币"<<endl;
    return 0;
}