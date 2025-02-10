#include <iostream>
using namespace std;
// By wrapping up everything in a class we have achieved encapsulation
class Animal
{
    // by hiding all the data memebrs i.e., marking them private we have achieved the perfect encapsulation

private:
    int age;
    int weight;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }

    // Applying getters  and setters for accessing private data members as they have been marked private
    void getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
} ;
int main()
{
    cout << "Hello" << endl;
    return 0;
}