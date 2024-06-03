#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if(num%2==0){
        cout<<num<<" is an Even Number";
    }
    else{
        cout<<num<<" is a Odd Number";
    }
    return 0;
}