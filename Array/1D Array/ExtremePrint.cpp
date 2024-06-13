// Extreme Print of a given array
// Print 1st and Last , 2nd and 2nd last and so on

#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " " << arr[right] << " ";
        }
        left++;
        right--;
    }
}
int main()
{
    int arr[] = {11, 23, 45, 56, 52, 51, 46, 10, 78, 90};
    int size = 10;
    reverseArray(arr, size);
    return 0;
}