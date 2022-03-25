#include<iostream>
using namespace std;
int main()
{
    int x[10],n,sum=0,i;
    cout<<"Enter the no.of elements:";
    cin>>n;
int *ptr=x;      // or *ptr,
 cout<<"Enter the elements:";
for(i=0;i<n;i++){
   
    cin>>*(x+i)   ;  //or *(ptr+i)
    sum=sum+*(x+i);   //or *(ptr+i)
}
cout<<"Sum is:"<<sum;
}