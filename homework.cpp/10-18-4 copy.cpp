#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char ch;
    int n,i,j;
    cin>>ch>>n;
    for(j=1;j<=n;j++){
            if(j==n){
                 cout<<ch;
            }
            else cout<<" ";
        }
        
    for(i=2;i<=n;i++){
        cout<<endl;
        if(ch+1>90) ch=(ch-25);
                else ch=ch+1;
        for(j=1;j<=n+i-1;j++){
            if(abs(n-j)==i-1){
                 cout<<ch;
            }
            else cout<<" ";
        }
        
    }
for(i=1;i<=n-1;i++){
    cout<<endl;
    if(ch-1<65) ch=(ch+25);
                else ch=ch-1;
       for(j=1;j<=2*n-i-1;j++){
       if(abs(n-j)==n-i-1){
           
           cout<<ch;     
       }        
       else cout<<" ";
       }
    
}
return 0;
}