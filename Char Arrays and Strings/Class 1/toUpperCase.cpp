#include <iostream>
#include <string.h>
using namespace std;
void toUppercase(char ch[],int n){
    int index = 0;
    while(ch[index]!='\0'){
        // check if lowercase, then convert to upper case ---> agar koi special symbol hua toh uppercase lowercase usmein nhi hoga 
        if(ch[index]>='a' && ch[index]<= 'z'){
            ch[index]= ch[index]-'a'+'A';
        }
        index++;
    }
}
int main(){
    char ch[100];
    // cin >> ch;
    cout<< "Enter the string to be reversed: ";
    cin.getline(ch,100);
    toUppercase(ch,strlen(ch));
    cout << "Uppercased string is: " << ch;
    return 0;
}