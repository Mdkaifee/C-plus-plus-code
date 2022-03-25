#include<iostream>
using namespace std;
int binarySearch(int array[],int n,int search){
int s=0;
int e=n;
while (s<=e)
{
   int mid=(s+e)/2;
   if(array[mid]==search){
       return mid;
   }
   else if(array[mid]>search){
        e= mid-1;
   }
        else{
            s=mid+1;
        }
        }
return -1;
}
int main(){
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
cin>>array[i];
}
int search;
cin>>search;
cout<<binarySearch(array,n,search);
}

