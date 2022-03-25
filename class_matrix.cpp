#include<iostream>
using namespace std;
class matrix{
    int a[3][3];
public:
void getdata(){

for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
    cout<<"Enter the elements of matrix:";
cin>>a[i][j];
}}}
void display(){

{
    for(int i=0;i<3;i++)
    {
for(int j=0;j<3;j++)
{
    cout<<"Matrix is:";
cout<<a[i][j];
}}}
};
void main()
{
    matrix m;
    m.getdata();
    m.display();
}