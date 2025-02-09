#include <iostream>
using namespace std;
int main()
{
    // creation
    char ch[10];
    char chSpace[100];

    // input
    cout << "This will print character till 1 word only: ";
    cin >> ch;

    // use getline function to print lines having spaces between them
    cout <<"\n It wll print complete line: ";
    cin.getline(chSpace,100);


    // print words without space
    cout << "Printng the value of ch: " << ch << endl;
    // print words with space 
    cout << "Printng the value of chSpace: " << chSpace << endl;

    // printing using loop
    for (int i = 0; i < 10; i++)
    {
        cout << "At index: " << i << " " << ch[i] << endl;
    }

    // poving that ASCII value of null character is 0
    char temp = ch[6];
    // null character is on 6th index
    // temp me jo bhi pda hai use nteger me convert kr do
    int value = (int)temp; // explicit typecast
    // temp me jo bhi pda hai use integer me convert kr do
    cout << "Printing integer value: " << value << endl;
    return 0;
}