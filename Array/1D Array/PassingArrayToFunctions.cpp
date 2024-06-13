// Find any target element in an array using functions --> Linear Search
#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found
            return true;
        }
    }
    // notfound
    return false;
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5,target =8;
    // Function Call
    printArray(arr, size);
    bool ans = linearSearch(arr, size, target);
    if (ans == false)
    {
        cout << target << " is not found ";
    }
    else{
        cout << target << " is found ";
    }
    return 0;
}