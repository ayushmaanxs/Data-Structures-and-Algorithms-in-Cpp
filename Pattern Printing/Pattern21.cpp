// Numeric Hollow inverted half pyramid
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int b = 1;
    for (int row = 0; row < n; row++)
    {
        int a = b;
        for (int col = 1; col <= n - row; col++)
        {
            if (row == 0 || col == 1 || col == n - row)
            {
                cout << a << " ";
                a++;
            }
            else
            {
                cout << "  ";
                a++;
            }
        }
        cout << endl;
        b++;
    }
}