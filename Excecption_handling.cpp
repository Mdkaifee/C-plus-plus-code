#include<iostream>
using namespace std;
//#include<exception>
/*int main(){
    int a,b,c;
    cout<<"Enter a and b:";
    cin>>a>>b;
   c=a/b;
   cout<<c;
}
Here compiler will through an error if value of b will be zero and in square root negative no.will through an error or if element is taking more then the size of an array ,to solve this problem we use the concept of exception hadling and so 3 construct/keyword is used i.e try,catch nd throw       */
int main(){
    float a,b,c;
    cout<<"Enter a and b:";
    cin>>a>>b;
    try{
        if(b==0){
 throw 4;
 c=a/b;
        }  
  }  
catch(int x)
{
    cout<<"New result is="<<c;
}
}
