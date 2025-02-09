#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    int mid = start + ((end-start)/2);
    while(start <=end){
        // found
        if(arr[mid]== target){
            // return index of found element
            return mid;
        }
        else if(arr[mid]<target){
            //right me jaao
            start = mid + 1;
        }
        else if(arr[mid]>target){
            //left me jaao
            end = mid - 1;
        }
        // mid update after evry iteration
        // note the common mistake of not updating mid after every iteration
        mid = start + ((end-start)/2);
    }
    // agar yaha tak pauch gye that means ki hume element nhi mila 
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 90;
    int n = 9;
    int found = binarySearch(arr,n,target);

    if(found == -1){
        cout << target << " not found";
    }
    else{
        cout<< target << " found at index number "<<found;
    }
    return 0;
}