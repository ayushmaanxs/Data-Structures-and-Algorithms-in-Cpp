#include <iostream>
using namespace std;
void maximum(int a , int b,int c){
    // if(a>=b && a>=c) cout << "Maximum between 3 is: " << a <<endl;
    // else if(b>=a && b>=c) cout << "Maximum between 3 is: " << b <<endl;
    // else cout << "Maximum between 3 is: " << c <<endl;

    //2nd method
    int ans1=max(a,b);
    int ans2=max(ans1,c);
    cout << "Maximum between 3 is: " << ans2 <<endl;
}
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    maximum(a,b,c);
    return 0;
}