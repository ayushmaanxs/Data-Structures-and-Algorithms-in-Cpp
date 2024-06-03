#include <iostream>
using namespace std;
void sum(int a, int b, int c)
{
    cout << a + b + c << endl;
}
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    sum(a, b, c);
    return 0;
}