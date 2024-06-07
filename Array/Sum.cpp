// Sum of total element of a 5 size array
#include <iostream>
using namespace std;
int main()
{
    int arr[10], sum = 0;
    cout << "Enter numbers : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "The sum of elements of array is : " << sum << endl;
    return 0;
}