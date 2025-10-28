#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int appearance[100]={0},money[100]={0};
    int n=0,max_appearance;
    char ch;
    for(;n<100;){
        cin>>money[n];
        ch=cin.get();
        if(ch=='\n'||ch==EOF) break;
        else {
            n++;
        }
    }
    //cout<<n<<endl;
    //写入money
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(money[i]==money[j]){
                appearance[i]++;
            }
        }
    }//统计money数组中各个数的出现次数，并且不改变下表对应关系
max_appearance=*max_element(appearance,appearance+n);
//cout<<max_appearance<<endl;
if(max_appearance<=(n+1)/2){
    cout<<"0";
}
//else if(max_appearance==n/2&&n%2==1){
    //cout<<"0";
//}
else{
    for(int k=0;k<=n;k++){
        if(appearance[k]==max_appearance){
            cout<<money[k]<<endl;
            break;
        }
        //cout<<money[k]<<endl;
    }
}
return 0;
}