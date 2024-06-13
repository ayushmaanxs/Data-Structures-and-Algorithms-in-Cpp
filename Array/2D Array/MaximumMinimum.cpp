#include <iostream>
#include <limits.h>
using namespace std;

void minimum(int arr[][3],int col,int row){
    int mini = INT_MAX;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j]<mini){
                mini = arr[i][j];
            }
        }
    }
    cout << "The minimum is : " << mini <<endl;
}

void maximum(int arr[][3],int col,int row){
    int maxi = INT_MIN;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }
    }
    cout << "The maximum is : " << maxi <<endl;
}

int main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}
                    };
    minimum(arr,3,3);
    maximum(arr,3,3);
    return 0;
}