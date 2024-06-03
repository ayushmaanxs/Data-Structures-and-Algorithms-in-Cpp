#include <iostream>
using namespace std;

int prime(int n)
{
    int a = 1;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0 || n < 2)
        {
            a = 0;
            return a;
        }
    }
    return a;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        int a = prime(i);
        if (a == 1)
        {
            cout << i <<" ";
        }
    }
    return 0;
}