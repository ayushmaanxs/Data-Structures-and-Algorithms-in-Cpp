#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int a = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n + 3 - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2*row+1; col++)
        {
            if(col%2!=0){
                cout << "* ";
            }
            else{
                cout << a <<" ";
            }
        }
        for (int col = 0; col < n + 3 - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
        a++;
    }
    return 0;
}