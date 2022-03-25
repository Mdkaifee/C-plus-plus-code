#include <iostream>
using namespace std;
int main()
{
int a =3;
int *b=&a;
cout<<b<<endl;  
cout<<&a<<endl;
cout<<*b<<endl;
//Pointer to pointer
int**c=&b;
cout<<&b<<endl;
cout<<c<<endl;
cout<<*c<<endl;
cout<<**c<<endl;
return 0;
}