// Alphabet and its reverse triangle
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {   
        // int a = 65;
        char ch;
        for (int col = 0; col < row+1; col++)
        {   
            int number = col+1;
            ch = number + 'A'-1;
            cout<<ch <<" ";
           // Another approach;
           // cout << char(a) << " ";
            // a++;
        }
        // jab tak A tak nahi pauchte tab tak print karenge
        for(char alphabet = ch;alphabet>'A';){
            alphabet = alphabet -1;
            cout<<alphabet<<" ";
        }
        
        cout << endl;
    }
}