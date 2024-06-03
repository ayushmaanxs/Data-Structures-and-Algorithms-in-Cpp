#include <iostream>
using namespace std;
int main(){
    int num = 50;
    // printing value stored inside variable num
    cout << num << endl ;
    // printing the size of num variable in bytes
    // int --> 4 byte
    cout << sizeof(num) << endl;

    //character --> 1 byte
    char ch = 'k';
    cout << ch << endl;
    cout << sizeof(ch) << endl;

    //float --> 4 byte
    float point = 1.69;
    cout << point << endl;
    cout << sizeof(point) << endl;

    // long --> 4 or 8 byte
    long nax = 40;
    cout << nax << endl;
    cout << sizeof(nax) << endl;

    // Garbage Value
    int sum ;
    cout << sum << endl;

    return 0;

}
