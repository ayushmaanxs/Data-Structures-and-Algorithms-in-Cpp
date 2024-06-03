// find number of digits in the number
// Reverse the input number
// find num of original and reversed number

#include <iostream>
using namespace std;
int main()
{
    int num, reverseNum = 0 , digitCount = 0;
    cout << "Enter number : ";
    cin >> num;
    int n = num;
    while (n > 0)
    {
        reverseNum = 10*reverseNum + (n % 10);
        n = n/10;
        digitCount++;
    }
    cout << "The number of digits in " << num << " is : " << digitCount <<endl ;
    cout << "The reversed number is : "<< reverseNum << endl;
    cout << "The sum of number and its reverse is: " << num + reverseNum <<endl;
    return 0;
}