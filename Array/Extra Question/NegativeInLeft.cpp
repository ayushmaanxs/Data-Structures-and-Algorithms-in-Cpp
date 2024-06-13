// Move all negative numbers to the left

#include <iostream>
using namespace std;
void shiftNegativeToLeft(int arr[],int n){
    int j = 0;
    //j -> memory block jaha par hum negative number ko store kar skte hai

    for(int index = 0;index<n;index++){
        // index entire array ko tranverse krne ke liye
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]= {1,7,10,-12,20,-34,0,-3};
    int n = 8;
    shiftNegativeToLeft(arr,n);
    for(int i = 0 ;i<n;i++){
        cout << arr[i]<< " ";
    }
    return 0;
}