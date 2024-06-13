// If element is matched to the target return true else false

#include <iostream>
using namespace std;
bool search(int arr[][3],int row,int col,int target){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if(arr[i][j] == target){
                return true;
           }
        }
    }
    return false;
}
int main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    bool flag = search(arr,3,3,5);
    cout << flag <<endl;
    return 0;
}