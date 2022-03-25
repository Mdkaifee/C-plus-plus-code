#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {23, 88, 96, 50};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    //Pointers and arrays
    int *p = marks;
    cout << *(p++) << endl;
    cout << *p << endl;
    cout << *(++p) << endl;
    //**cout <<*(p+1)<<endl;
    //cout <<*(p+2)<<endl;
    //cout <<*(p+3)<<endl;
    //cout <<*(p+4)<<endl;
     return 0;
}
