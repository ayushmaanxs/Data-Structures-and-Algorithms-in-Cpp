// full pyramid number pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        int a = 1;
        // space
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }
        // number
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}