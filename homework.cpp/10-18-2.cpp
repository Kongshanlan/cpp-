//找出一组数中出现最多的数字
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,number,current_choice;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int num_of_appearance[n]={0};
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(array[j]==array[k]) num_of_appearance[j]++;
        }
    }
current_choice=*max_element(num_of_appearance,num_of_appearance+n);
    for(int i=0;i<n;i++){
        if(num_of_appearance[i]==current_choice){
            number=array[i];
            break;
        }
    }
    cout<<number<<endl;
    return 0;
}