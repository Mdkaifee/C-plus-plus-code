#include<iostream>
#include<math.h>
using namespace  std;
int main()
{
    int a,b,c;
    cout<<"Enter a and b:";
    cin>>a>>b;
    try{
        if(b==0){
            throw  4;
            c=a/b;
            if(a<0)
            throw 5;
        }
    }
     catch(int y){
        cout<<"Square root is not possible";}
    catch(int x){
        cout<<"Division is not possible";
    }
c=sqrt(a/b);
cout<<"Result is="<<c;
}