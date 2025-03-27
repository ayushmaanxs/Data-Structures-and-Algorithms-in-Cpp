// Runtime Polymorphism
// In C++, method overriding is a feature in object-oriented programming (OOP) where a child class (called a derived class) can change or replace a method that it gets from its parent class (called a base class). This allows the child class to have its own version of the method, tailored to its needs, while keeping the same method name and structure.

#include <iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout << "I am inside the animal constructor"<< endl;
    }
    virtual void speak(){
        cout << "Speaking " << endl;
    }
};

class Dog :public Animal{
    public:
    Dog(){
        cout << "I am inside the dog constructor"<< endl;
    }
    // override
    void speak(){
        cout << "Barking " << endl;
    }
};
int main(){
    // Dog a;
    // a.speak();

    // Animal* a = new Animal();
    // a->speak();

    // Dog* a = new Dog();
    // a->speak();

    // Pointer parent (Animal) class ka hai and object child(Dog) class ka --> Upcasting --> in case me hmesa function parent class ka call hoga

    // UPCASTING
    // Animal* a = new Dog();
    // a->speak(); // speaking
    // if we want to decide at runtime then we have to use virtual keyword in the parent wala function

    // DOWNCASTING --> pointer from child class and object from parent class
    // Dog* b = (Dog* )new Animal();
    // b->speak();

    // Upcasting ya downcasting dono mein hi pointer wale ka method hi call ho rha hoga agr parent wale ke method mein virtual keyword use nhi kiya hai toh

    // Animal* a = new Animal(); // basic behaviour animal ka constructor call hua
    // Animal* a = new Dog(); 
    // Dog* a = new Dog();
    // last 2 lines iske upar unme animal and dog dono ka constructor call hua due to inheritance behaviour
    Dog* a = (Dog*) new Animal;
    
    return 0;
}
