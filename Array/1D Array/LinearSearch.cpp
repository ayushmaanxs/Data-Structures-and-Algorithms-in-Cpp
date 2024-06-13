// Find any target element in an array 
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {11, 23, 45, 56, 52, 51, 46, 10, 78, 90};
    int target = 78;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == target)
        {
            cout << target << " is found at index " << i << endl;
            return 0;
        }
    }
    cout << target << " is not found at any index" << endl;
    return 0;
}