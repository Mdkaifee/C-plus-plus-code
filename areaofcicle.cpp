#include <iostream>
using namespace std;
#define PI 3.141
int main()
{
float radius,diameter;
double area;
cout<<"Enter radius:"<<endl;
cin>>radius;
diameter=radius*2;
cout<<"diameter:"<<diameter<<endl;
area=PI*radius*radius;
cout<<"area:"<<area;
return 0;
}