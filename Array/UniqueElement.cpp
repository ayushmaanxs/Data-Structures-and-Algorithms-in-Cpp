// Find unique element from an array --> each element occus twice except one

#include <iostream>
using namespace std;
int getUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {2, 10, 11, 10, 2, 13, 15, 13, 15};
    int n = 9;
    int finalAns = getUnique(arr, n);
    cout << "Final answer is : " << finalAns << endl;
    return 0;
} 