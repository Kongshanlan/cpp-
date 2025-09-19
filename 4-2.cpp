#include<iostream>
using namespace std;
int main(){
    int num_of_students,score,max(0),min(100),sum,average,i;
    cout<<"Enter the number of students:"<<endl;
    cin>>num_of_students;
    for(i=0;i<num_of_students;++i){
        cout<<"Enter the score of students:"<<endl;
        cin>>score;
        sum+=score;
        if(score>max)max=score;
        if(score<min)min=score;
    }
    average=sum/num_of_students;
    cout<<"The max score is"<<max<<"The min score is"<<min<<"The average score is"<<average<<endl;
    return 0;
}