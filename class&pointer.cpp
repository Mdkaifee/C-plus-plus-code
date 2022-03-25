#include <iostream>
using namespace  std;
class date{
    int dd;
    int mm;
    int yy;
};
void main()
{
    data d;
    data*ptr;
    ptr = &d;
    cout<<"Enter the date:";
    //cin>>d.dd>>d.mm>>d.yy;      *It is an incorrect statement u can't do like this*
    cin>>*ptr.dd>>*ptr.mm>>*ptr.yy;
    //cin>>ptr->dd>>ptr->mm>>ptr->yy;    u can also do like this

}

