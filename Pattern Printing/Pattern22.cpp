// Numeric Palindrome Equilateral Pyramid
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int a = 1;
        int b = row;
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << a <<" ";
            a++;
        }
        for (int col = 0; col < row; col++)
        {
            cout << b <<" ";
            b--;
        }
        cout << endl;
    }
}