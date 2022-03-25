#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int Id;
    char favChar;
    float salary;
};
int main()
{
    struct employee harry;
    harry.Id = 1;
    harry.favChar = 'c';
    harry.salary = 102220000;
    cout << harry.Id << endl;
    cout << harry.favChar << endl;
    cout << harry.salary << endl;
}; /*
int main(){
enum Meal{breakfast,lunch,dinner};
cout<<breakfast;
cout<<lunch;
cout<<dinner;
}*/


}