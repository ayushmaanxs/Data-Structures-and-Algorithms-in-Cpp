//Flipped Solid Diamond

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    // Upper Half
    for (int row = 0; row < n; row++)
    {
        // Inverted Triangle 1
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        // Full Pyramid 1
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << "  ";
        }
        // Inverted Triangle 2
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower Half
    for (int row = 0; row < n; row++)
    {
        // Triangle 1
        for (int col = 0; col < row+1; col++)
        {
            cout << "* ";
        }
        // Pyramid 1
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << "  ";
        }
        // Triangle 2
        for (int col = 0; col < row+1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
