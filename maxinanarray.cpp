#include<iostream>
using namespace std;
int main()
{
   
    int array[5]={0};
    for(int i=0;i<5;i++)
    {
        cout<<"Enter array you want to compare:";
        cin>>array[i];
    }
int max=array[0];
for(int i=1;i<5;i++)
{
    if (max<array[i]){
        max=array[i];
    }
}
cout<<"Maximum value is:"<<max;
}