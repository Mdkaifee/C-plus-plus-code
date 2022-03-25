#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter age:";
cin>>age;
if(age>=18 && age <= 90)
{
    cout<<"You are allowed to vote";
}
else if(age>0 && age<18)
{
    cout<<"You are not allowed to vote";
}
else{
cout<<"Invalid age";

}

}