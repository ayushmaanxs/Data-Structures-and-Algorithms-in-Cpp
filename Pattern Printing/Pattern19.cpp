//Hollow Number Triangle

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 1; row <=n; row++)
    {   
        int a = 1;
        for (int col = 0; col < row; col++)
        {
            if(row==0 || row==n || col==0 || col==row-1){
                cout << a << " ";
                a++;
            }
            else{
                cout << "  ";
                a++;
            }

        }
    
        cout << endl;
    }
}