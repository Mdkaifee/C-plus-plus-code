#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i;
    
   do {
       
        sum = sum + i;
        i++;
        
    }while(i<=10);
    cout << "Sum will be:" << sum;
}