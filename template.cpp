#include<iostream>
using namespace std;
template<class Z>
    void Swap(Z &x,Z &y){
        Z temp;
        temp=x;
        x=y;
        y=temp;
    }
int main(){
    int a=10,b=5;
    float f1=7.2,f2=8.9;
    char c1='m',c2='n';
    cout<<"Before swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
     cout<<"f1="<<f1<<endl;
    cout<<"f2="<<f2<<endl;
     cout<<"c1="<<c1<<endl;
    cout<<"c2="<<c2<<endl;
    Swap(a,b);
    Swap(f1,f2);
    Swap(c1,c2);
    cout<<"After swapping"<<endl;
 cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
     cout<<"f1="<<f1<<endl;
    cout<<"f2="<<f2<<endl;
     cout<<"c1="<<c1<<endl;
    cout<<"c2="<<c2<<endl;
    return 0;
}
    /*swap(int &x,int &y)
    {
        int t;
        t=x;
        x=y;
        y=t;
    }
    void swap(char &m,char &n){
        char t;
        t=m;
        m=n;
        n=t;
    }//Both program will not execute,only integer part will execute,for both the execution i have to write one more function i.e template fn and no need to write two fn,only template will work for both   */
   