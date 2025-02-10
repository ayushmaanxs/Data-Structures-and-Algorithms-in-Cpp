#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    int weight;
    void eat()
    {
        cout << "Eating" << endl;
    }
};

// public mode of inheritance se inherit kr lena Animal ke memebers and methods ko
class Dog : public Animal
{
    // dog ke andar sb kuch inherit ho gya Animal me se
};
// protected mode of inheritance
class Cat : protected Animal
{
public:
    void print()
    {
        cout << this->age;
    }
};
// private mode of inheritance
class Cat2 : private Animal
{
public:
    void print()
    {
        cout << this->age;
    }
};
int main()
{
    // public  mode of inheritance
    // Dog d1;
    // d1.eat();
    // cout << d1.age;
    
    // protected mode of inheritance
    // Cat c1;
    // c1.print();

    // private mode of inheritance
    Cat2 c3;
    c3.print();
    return 0;
}