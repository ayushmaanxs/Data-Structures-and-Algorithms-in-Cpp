#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    int op;
    cout << "What operation you want to do?" << endl;
    cin >> op;
    float ans = 0;
    // op 0 -> add, 1-> subtract ,2-> divide,3-> multiply,invalid operation
    switch (op)
    {
    case 0:
        ans = a + b;
        break;
    case 1:
        ans = a - b;
        break;
    case 2:
        ans = a / b;
        break;
    case 3:
        ans = a * b;
        break;
    default:
        cout << "Inavlid Operation" << endl;
        return 0;
    }
    cout<<"Your answer is: "<< ans <<endl;
    return 0;
}
