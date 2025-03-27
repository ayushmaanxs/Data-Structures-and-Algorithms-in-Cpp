// Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class

#include <iostream>
using namespace std;
class A
{
public:
    int physics ;
    int chemistry ;
    //Use Constructor to provide values always
    A(){
        physics = 10;
        chemistry = 90;
    }
};
class B
{
public:
    int chemistry ;
    B(){
        chemistry = 190;
    }
};
class C : public A, public B
{
public:
    int maths;
    C(){
        maths = 70;
    }
};
int main()
{
    C obj;
    // use scope resolution operator in case of name conflicts
    cout << obj.physics << " " << obj.A::chemistry << " " << obj.maths << " " << obj.B::chemistry << endl;
    return 0;
}