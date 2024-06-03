// Butterfly Pattern
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int a = n/2;
    // UPPER HALF
    for (int row = 0; row < a; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        for (int col = 0; col < n - 2 * row - 2; col++)
        {
            cout << "  ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // LOWER HALF

    for (int row = 0; row < a; row++)
    {
        for (int col = 0; col < a-row; col++)
        {
            cout << "* ";
        }

        for (int col = 0; col < 2 * row; col++)
        {
            cout << "  ";
        }

        for (int col = 0; col < a-row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}