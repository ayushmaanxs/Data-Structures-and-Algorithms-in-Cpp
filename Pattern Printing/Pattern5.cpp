//Inverted alphabet triangle pattern

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {   
        int a =65;
        for (int j = 0; j < n - i; j++)
        {
            cout << char(a) << " ";
            a++;
        }
        cout << endl;
    }
}