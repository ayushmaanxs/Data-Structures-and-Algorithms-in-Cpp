#include <iostream>
using namespace std;
void prime(int n)
{
    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true && n > 1)  // smallest prime number is 2
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    prime(num);
    return 0;
}