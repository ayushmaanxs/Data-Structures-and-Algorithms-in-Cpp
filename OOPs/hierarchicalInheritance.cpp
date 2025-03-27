// In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

#include <iostream>
using namespace std;
// scorpio ek Car hai
class Car
{
public:
    string name;
    int weight;
    int age;

    void speedUp()
    {
        cout << " Speeding Up " << endl;
    }
    void breakLagao()
    {
        cout << "Laga diya break " << endl;
    }
};

class Scorpio : public Car
{
};

class Fortuner : public Car
{
};

int main()
{
    Scorpio s11;
    s11.speedUp();
    Fortuner f11;
    f11.speedUp();
    return 0;
}