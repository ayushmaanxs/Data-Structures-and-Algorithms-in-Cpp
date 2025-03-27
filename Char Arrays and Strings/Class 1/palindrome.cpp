#include <iostream>
#include <string.h>
using namespace std;
bool checkPalindrome(char ch[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        if (ch[i]== ch[j]){
            i++;
            j--;
        }
        else{
            // character not matching
            return false;
        }
    }
    // agar yha tak pauch gye toh that means ki saare characters match kr gye hai or iska mtlb palindrome hai so hum true return kr rhe hai

    return true;
    
};
int main(){
    char ch[100];
    // cin >> ch;
    cout << "Enter the string to Check for Palindrome: ";
    cin.getline(ch, 100);
    bool flag = checkPalindrome(ch, strlen(ch));
    if(flag == true){
        cout << ch << " is a palindrome";
    }
    else{
        cout << ch << " is not a palindrome";
    }
    return 0;
}