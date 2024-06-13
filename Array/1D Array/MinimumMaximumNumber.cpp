// Find minimum and maximum number from an array

#include <iostream>
#include <limits.h>
using namespace std;
/*
void MiniMaxi(int arr[], int size)
{
    int Minimum = INT_MAX;
    int Maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (Minimum > arr[i])
        {
            Minimum = arr[i];
        }
        if (Maximum < arr[i])
        {
            Maximum = arr[i];
        }
    }
    cout << "The minimum number is : " << Minimum << endl;
    cout << "The maximum number is : " << Maximum << endl;
}
*/
int MinimumNumber(int arr[], int size)
{
    int Minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (Minimum > arr[i])
        {
            Minimum = arr[i];
        }
    }
    return Minimum;
}

int MaximumNumber(int arr[], int size)
{
    int Maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (Maximum < arr[i])
        {
            Maximum = arr[i];
        }
    }
    return Maximum;
}

int main()
{
    int arr[] = {11, 23, 45, 56, 52, 51, 46, 10, 78, 90};
    int size = 10;
    int Minimum = MinimumNumber(arr, size);
    cout << "The minimum number is : " << Minimum << endl;
    int Maximum = MaximumNumber(arr, size);
    cout << "The maximum number is : " << Maximum << endl;
    // MiniMaxi(arr,size);
    return 0;
}
