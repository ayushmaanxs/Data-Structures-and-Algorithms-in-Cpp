#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, n;
    cout << "Enter fibonacci length: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        b = a;
        a = sum;
        sum = a + b;
        cout << sum << endl;
    }
    return 0;
}