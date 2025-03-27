#include <iostream>
using namespace std;
int x = 10; // global x  (can be accessed anywhere)
void fun(){
    int x = 60;
    cout << x << endl; // 60
    ::x = 40;
    cout << ::x << endl; // 40 (global x)
}
int main(){
    x = 4;  // updating global x
    int x = 20; // local to main() fn
    x = 2; // local x getting updated
    cout << x << endl; // 2  // by default most local is accessed
    cout << ::x << endl;// 4  // accessing global x with ::

    {
        int x = 50;
        {
            int x = 44;
            cout << x << endl; // 44 // most local x has value 44
        }
        cout << x << endl; // 50 // most local x has value 50
        cout << ::x << endl; // accessing global x
    }
    fun();
    return 0;
}