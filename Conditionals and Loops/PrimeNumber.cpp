#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    bool flag = 0;
    for(int i = 2;i<num;i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << num << " is a prime number";
    }
    else{
        cout << num << " is a composite number";
    }
    return 0;
}