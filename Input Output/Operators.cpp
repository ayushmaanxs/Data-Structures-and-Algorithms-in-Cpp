#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int b = 4;

    cout << "Arithematic Operator" << endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    cout << "Relational Operator" << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a < b) << endl;
    cout << (a != b) << endl;
    cout << (a == b) << endl;

    cout << "Logical Operator" << endl;
    int age = 2;
    int car = 12;
    if (age >= 18 && car >= 1)
    {
        cout << "License Miljayega" << endl;
    }
    else
    {
        cout << "License nhi milega" << endl;
    }
    

    return 0;
}