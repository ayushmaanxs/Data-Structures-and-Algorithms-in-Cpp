// Find total number of occurence of a number in a sorted array
#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // target element mil gya agar toh answer store kar lena because it may be possible ki is index ke phle bhi target aaya hoga khi
            ans = mid;
            // mid ke left me search
            e = mid - 1;
        }
        if (arr[mid] > target)
        {
            // mid ke left me search
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            // mid ke right me search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int target)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // target element mil gya agar toh answer store kar lena because it may be possible ki is index ke baad me bhi target aaya hoga khi
            ans = mid;
            // mid ke right me search
            s = mid + 1;
        }
        if (arr[mid] > target)
        {
            // mid ke left me search
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            // mid ke right me search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[10] = {1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int totalOccurrences = lastOccurrence(arr, 10, target) - firstOccurrence(arr, 10, target) + 1;
    cout << "Total number of times " << target << " occurred is : " << totalOccurrences;
}