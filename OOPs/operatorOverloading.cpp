// Compile Time Polymorphism
// Subtracting using + operator
// Operator overloading is a feature in C++ that allows you to redefine the behavior of operators (such as +, -, *, /, ==, etc.) for user-defined types, like classes. This means you can customize how operators work with your own objects, making your code more intuitive and natural to use, 


#include <iostream>
using namespace std;
 // compiler ko batay Param type ke object me plus symbol kaise behave krega
class Param{
    public:
    int val;
    void operator+(Param& obj2){
        int value1 = this -> val;
        int value2 = obj2.val;
        cout << (value1-value2) << endl;
    }
};
int main(){
    Param object1 , object2;
    object1.val = 7;
    object2.val = 2;

    // this should print the difference between them
    object1+object2;
    return 0;
}