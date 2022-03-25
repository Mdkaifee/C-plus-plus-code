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
    hh=0;
    min=0;
    sec=0;
}
time(int x,int y,int z){
    hh=x;
    min=y;
    sec=z;
} 
time(time &obj)//copy constructor
{
    hh=obj.hh;
    min=obj.min;
    sec=obj.sec;
}
};
int main()
{
    time t1,t2(4,6,8);
    time t3=t2;  //or time t3(t2);
    t1.display();//(0,0,0)
    t2.display();//(4,6,8)
    t3.display();//(4,6,8)
}