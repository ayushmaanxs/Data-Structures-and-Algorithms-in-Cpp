// hollow inverted triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (i==n || j == 0 || j == i - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
        }
        cout << endl;
    }
}