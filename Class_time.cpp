#include<iostream>
using namespace std;
class time{

int hh;
int min;
int sec;
public:

void getdata()

{
cout<<"Enter hh:min:sec";
cin>>hh>>min>>sec;
}
void display()
{
   cout<<hh<<":"<<min<<":"<<sec;
}
};
int main()
{
    time t;
    t.getdata();
    t.display();
}