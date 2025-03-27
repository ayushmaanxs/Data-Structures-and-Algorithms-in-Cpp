// In this type of inheritance, a derived class is created from another derived class and that derived class can be derived from a base class or any other derived class. There can be any number of levels.

#include <iostream>
using namespace std;

// Alphonso ek Mango hai and Mango ek Fruit hai

class Fruit
{
public:
    string name = "Alphonoso Name Hai Iska";
};

class Mango : public Fruit
{
public:
    int weight = 10;
};

class Alphonso:public Mango{
    public:
    int sugarLevel = 2;
};

int main()
{
    Alphonso a;
    cout << a.name << " \n " << a.weight << " \n " << a.sugarLevel << endl;
    return 0;
}