// Reverse elements of a given array

#include <iostream>
using namespace std;
void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    //print the array
    for(int i=0;i<size;i++){ 
        cout << arr[i] << " ";
    }

}
int main()
{
    int arr[] = {11, 23, 45, 56, 52, 51, 46, 10, 78, 90};
    int size = 10;
    reverseArray(arr, size);
    return 0;
}