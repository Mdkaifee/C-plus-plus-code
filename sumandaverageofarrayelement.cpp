#include<iostream>
using namespace std;
main()
{
int i=0,n;
float num[10];
float average,sum=0.0;
cout<<"Enter the value of n:";
cin>>n;
cout<<"Enter the numbers:";
while(i<5)
{
    cin>>num[i];
sum=sum+num[i];
i++;}
average=sum/n;
cout<<"Their sum ="<<sum<<endl;
cout<<"Their average ="<<average;
}