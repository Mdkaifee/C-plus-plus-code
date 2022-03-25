#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a & b:";
    cin>>a>>b;
    cout<<"Number before swapping"<<endl;
    cout<<"a="<<a;
    cout<<"b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping:"<<endl;
    cout<<"a="<<a;
    cout<<"b="<<b;
}
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
}