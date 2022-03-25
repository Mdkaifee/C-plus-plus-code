#include<iostream>
using namespace std;
int main()
{
    int n,num,i,input[10];
cout<<"Enter the no.of elements u want to enter: ";
cin>>n;
cout<<"Enter"  <<n  <<"elements:";
for(i=0;i<n;i++){
    cin>>input[i];
}
cout<<"Enter the no.u want to search:";
cin>>num;
for(i=0;i<=n;i++){
    if(input[i]==num){
cout<<"Element"<< num<<"found at index:"<<i;
break;}}
if(i==n)
    cout<<"Element"<<num <<"not present in array:";
 }

