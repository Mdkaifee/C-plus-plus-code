#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;
    /*if(age<18){
        cout<<"Not allowed in party"<<endl;
            }
   else if(age==18){
       cout<<"U should have a pass bcz u r a kid"<<endl;
   }
   else{
       cout<<"U r allowed in party"<<endl;
   }
    }*/
    switch (age)
    {
    case 18:
        cout<<"Your are 18"<<endl;
        break;
    
    case 22:
        cout<<"Your are 22"<<endl;
        break;
    case 2:
        cout<<"Your are 2"<<endl;
        break;
    default:
    cout<<"Invald case"<<endl;
        break;
    }
    return 0;
}
