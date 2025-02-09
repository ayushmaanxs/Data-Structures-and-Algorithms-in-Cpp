#include <iostream>
#include <string.h>
using namespace std;
void reverseString(char ch[],int n){
    // n is length of string
    int i = 0;
    int j = n-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }


}
int main(){
    char ch[100];
    // cin >> ch;
    cout<< "Enter the string to be reversed: ";
    cin.getline(ch,100);
    reverseString(ch,strlen(ch));
    cout << "Reversed string is: " << ch;
    return 0;
}