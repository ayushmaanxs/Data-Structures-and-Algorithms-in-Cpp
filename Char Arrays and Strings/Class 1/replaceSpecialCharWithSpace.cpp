// Replace @ with space
#include <iostream>
#include <string.h>
using namespace std;
void replaceWithSpace(char ch[], int n)
{
    // for (int index = 0; index < n; index++)
    // {
    //     if (ch[i] == '@')
    //     {
    //         ch[i] = ' ';
    //     }
    // }

    int index = 0;
    // or using while loop
    while (ch[index] != '\0') {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}
int main()
{
    char ch[100];
    // cin >> ch;
    cout << "Enter the string to be replace @ with space : ";
    cin.getline(ch, 100);
    replaceWithSpace(ch, strlen(ch));
    cout << "Space replaced string is: " << ch;
    return 0;
}