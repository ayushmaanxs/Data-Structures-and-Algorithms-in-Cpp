// Double up each element of a 10 size array
#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter numbers : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        arr[i] = 2 * arr[i];
    }
    cout << "Double array is : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}