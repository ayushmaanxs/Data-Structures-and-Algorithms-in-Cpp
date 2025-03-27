#include <iostream>
using namespace std;
int main()
{
    const int x = 5; // x is constant
    // initialization can be done but we can't reassign the value
    // x=10
    // cout << x << endl;

    /*
    2. const with pointers 
    const int *a = new int(2); // CONST Data , NON-CONST pointer
    int const *a = new int (2); // same meaning as the above line
    // *a = 29; // can't change the content of pointer (no reassignment of pointer content)
    cout << *a << endl; // 2
    int b = 20;
    a = &b; // pointer itself can be reassigned
    cout << *a << endl; // 20

    If we write const before asterik * then content (data) will be constant but we can reassign the pointer
    */
    /*
    // CONST Pointer but NON-CONST data
    int *const a = new int(2);
    cout << *a << endl;
    *a = 20; // chal jayega because Non Constant data
    cout << *a << endl;
    int b = 50;
    a = &b; // Nahi chalega CONST Pointer

    If we write const after asterik * then pointer will be constant , data can be modified
    */
    /*
    // If we want to use both at once means const data as well as const pointer
    const int *const a = new int(10);
    cout << *a << endl;
    *a = 50 // error
    int b = 100;
    a = &b; // error
    */
    return 0;
}