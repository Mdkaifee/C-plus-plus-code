#include <iostream>
using namespace std;
void display(int arr[100], int n)
{
    // Traversal
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int arr[100] = {1, 2, 6, 78};
    display(arr, 4);
}