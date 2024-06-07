//Shift elements of array by 1 step
#include <iostream>
using namespace std;
// right ki disha me shift by 1 step
void shiftArray(int arr[], int size)
{   
    // step 1 - store 1st element of array in temp
    int temp[2];
    temp[0] = arr[size-2];
    temp[1]=arr[size-1];

    // step 2 - 
    // shift -> arr[i] = arr[i-2]
    for (int i = size - 1; i > 1; i--)
    {
        arr[i] = arr[i - 2];
    }
    // step 3 - copy temp into 0th index
    arr[0] = temp[0];
    arr[1] = temp[1];
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    shiftArray(arr, n);
    return 0;
}