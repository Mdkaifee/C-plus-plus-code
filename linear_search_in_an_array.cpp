#include<iostream>
using namespace std;
int linearSearch(int array[],int n,int search){
for(int i=0;i<n;i++){
    if (array[i]==search){
        return i;
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
cout<<linearSearch(array,n,search);
}