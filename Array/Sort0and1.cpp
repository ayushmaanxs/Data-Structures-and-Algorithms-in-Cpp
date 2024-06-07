#include <iostream>
using namespace std;
void sortZeroandOne(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    // STEP 1 :- count number of 0's and 1's
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    // int i;
    // //Place all the zeroes first
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }
    // //Place all the ones later
    // for (int j = i; j < n; j++)
    // {
    //     arr[j] = 1;
    // }
    cout << endl
         << "The sorted array is: " << endl;
         
    // Printing the sorted array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    //More easy way
    int index = 0;
    while(zeroCount--){
        arr[index]=0;
        index++;
    }
    while(oneCount--){
        arr[index]=1;
        index++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0};
    int n = 14;
    cout << "Initially the array looks like: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    sortZeroandOne(arr, n);
    return 0;
}