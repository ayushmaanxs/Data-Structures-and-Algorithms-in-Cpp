#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        cout << endl
             << "Outer Loop: " << i << endl;
        for (int j = 1; j <= 3; j++)
        {
            cout << "Inner Loop: " << j << endl;
        }
    }
    return 0;
}