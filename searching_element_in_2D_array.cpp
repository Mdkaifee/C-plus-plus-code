#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << "Matrix is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}
int x;
cin >> x;
bool flag = false;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (array[i][j] == x)
        {
            cout << i << " " << J << "\n";
            cout << "Element found";
            flag = true;
        }
    }
}
if (flag)
{
    cout << "Element is found\n";
}
else
{
    cout << "Element is not found\n";
}