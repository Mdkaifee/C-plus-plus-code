#include<iostream>
using namespace std;
class time{
int hh;
int min;
int sec;
public:

/*void getdata()

{
cout<<"Enter hh:min:sec";
cin>>hh>>min>>sec;
}*/
void display()
{
   cout<<hh<<":"<<min<<":"<<sec;
}
time(){
    hh=10;
    min=20;
    sec=50;
}
time(int x,int y,int z){//constructor overloading
    hh=x;
    min=y;
    sec=z;
}
};
int main()
{
    time t1,t2(4,6,8);
    t1.display();//(0,0,0)
    t2.display();//(4,6,8)
}