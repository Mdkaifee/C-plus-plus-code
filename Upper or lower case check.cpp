/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int  main()

{

char ch;

cout<<"Enter a character: ";

cin>>ch;

if(ch>='A' && ch<='Z')

{

cout<<ch<<" is an upper case letter ";

}

else if(ch>='a' && ch<='z')

{

cout<<ch<<" is a lower case letter ";

}

else

{

cout<<ch<<" is not an Alphabets ";

}

}

