//Full Number Star Combo Triangle

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int a = 1;
    //Upper Half
    for (int row = 0; row <n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << a << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        a++;
        cout << '\n';
    }
    int b = n-1;
    //Lower Half
    for (int row = 0; row < n-1; row++)
    {
        for (int col = 0; col < (2 * (n-1)) - (2 * row) - 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << b << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        b--;
        cout << '\n';
    }
    return 0;
}