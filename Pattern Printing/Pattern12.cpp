// Hollow pyramid pattern

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
            // print star for first and last col
            //  (row+1) col hai hmare paas toh last element (row+1)-1 pe hoga as ye start 0 se ho rha hai
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                // for every col between first and last column print spaces
                cout << "  ";
            }
        }
        cout << endl;
    }
} 