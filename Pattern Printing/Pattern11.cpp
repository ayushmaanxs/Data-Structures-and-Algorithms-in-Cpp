// Diamond pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        // space
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row = row + 1)
    {
        // space
        for (int col = 0; col < row; col = col + 1)
        {
            cout << " ";
        }
        // stars
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}