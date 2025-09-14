#include<iostream>
using namespace std;
int main()
{
    double radious,x,y;
    cout<<"Enter the radious of circle:";
    cin>>radious;
    cout<<"Enter the x and y coordinates of point:";
    cin>>x>>y;
    cout<<"The point is("<<x<<","<<y<<")"
        <<(x*x+y*y<=radious*radious?" is inside the circle.":" is outside the circle.")<<endl;
        return 0;
}