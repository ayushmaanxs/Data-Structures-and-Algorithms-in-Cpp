// Count number of Zeroes and Ones in an array

#include <iostream>
using namespace std;
void countZeroesOnes(int arr[], int size)
{
    int ZeroCount = 0;
    int OneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            ZeroCount++;
        }
        else if (arr[i] == 1)
        {
            OneCount++;
        }
    }
    cout << "There are " << ZeroCount << " Zeros and " << OneCount << " Ones" << endl;
    return;
}
int main()
{
    int arr[100];
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    countZeroesOnes(arr, size);
    return 0;
}