#include <iostream>
#include <string.h>
using namespace std;
void toUppercase(char ch[],int n){
    int index = 0;
    while(ch[index]!='\0'){
        // check if uppercase, then convert to lower case ---> agar koi special symbol hua toh uppercase lowercase usmein nhi hoga 
        if(ch[index]>='A' && ch[index]<= 'Z'){
            ch[index]= ch[index]-'A'+'a';
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