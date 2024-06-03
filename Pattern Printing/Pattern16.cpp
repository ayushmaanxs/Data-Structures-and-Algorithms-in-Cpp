//Number Star Combo Triangle

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int a = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col % 2 != 0)
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
    return 0;
}