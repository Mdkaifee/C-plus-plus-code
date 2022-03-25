#include<iostream>
using namespace std;
int main()
{
    int *ptr,n,sum=0,i;
    cout<<"Enter the no.of elements:";
    cin>>n;
ptr=new int[n];
 cout<<"Enter the elements:";
for(i=0;i<n;i++){
    cin>> *(ptr+i);
    sum=sum+*(ptr+i);
}
cout<<"Sum is:"<<sum;
}