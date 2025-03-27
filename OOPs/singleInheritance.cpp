// In single inheritance, a class is allowed to inherit from only one class. i.e. one base class is inherited by one derived class only.

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

int main()
{
    Scorpio mera;
    mera.speedUp();
    return 0;
}