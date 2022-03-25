#include <iostream>

using namespace std;

int main()
{
    int a[10][10], transpose[10][10], i, j, rows, columns;
    cout << "Enter no. of rows ";
    cin >> rows;
    cout << "Enter no. of columns ";
    cin >> columns;
    cout << "Enter elements for rows and column";
    for (i = 0; i < rows; i++)
    {
        for (i = 0; j < columns; i++)
        {
            cin >> a[i][j];
        }
    }
    
        cout << "Enter elements " << i + 1 << j + 1 << ":";
    
    // Original matrix
    cout << "Entered Matrix:" << endl;
    for (i = 0; i < rows; i++)
    {
        for (i = 0; j < columns; i++)
        {
            cout << a[i][j];
        }
    }
    // Finding transpose
    for (i = 0; i < rows; i++)
    {
        for (i = 0; j < columns; i++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    // Display the transpose of matrix
    cout << "Transpose of matrix will be:" << endl;
    for (i = 0; i < rows; i++)
    {
        for (i = 0; j < columns; i++)
        {
            cout << transpose[i][j];
        }
    }
}