#include <iostream>
using namespace std;

class Animal
{
private:
    int weight;

public:
    // state or properties
    int age;
    string type;

    // Default constructor -> code run krne pe ye auto call ho jata hai hum nhi bhi likte toh bhi object creation ke time ek defualt constructor call ho jata hum likh ke default contsructor ko overwrite kr rhe hai
    Animal()
    {
        // class ke andar jab bhi hume members ko access krna ho toh we will use this->  it is a good practice
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout << "Constructor Called" << endl;
    }

    // parameterized constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Parameterised constructor called " << endl;
    }
    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Parameterised constructor with 2 parameters called " << endl;
    }
    Animal(int age, int weight, string type)
    {
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout << "Parameterised constructor with 3 parameters called " << endl;
    }

    // copy constructor --> by default shallow Copy hota hai so to do deep copy hum copy constructor use krte hai
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout << "I am inside copy constructor " << endl;
    }

    // Destructor Function  -> tilda sign ~ ka use krke destructor call krte hai
    ~Animal()
    {
        cout << "I am inside destrucotr" << endl;
    }

    // Behaviour
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "Sleeping" << endl;
    }

    // accessing private member using getters and setters
    int getWeight()
    {
        return weight;
    }
    // void setWeight(int w)
    // {
    //     weight = w;
    // }
    void setWeight(int weight)
    {
        this->weight = weight;
        // this->weight  => it is just inside the class
        // weight => it is the parameter wala weight jo pass hua hai is function mein
    }
    void print()
    {
        cout << this->age << " " << this->weight << " " << this->type << endl;
    }
};

int main()
{
    cout << "Size of empty class is : " << sizeof(Animal) << endl; // 1 byte aata hai
    // Object Creation

    // Static Allocation --> Creating a static object --> myObj
    Animal myObj; // animal type ka object hai jiska naam myObj hai
    myObj.age = 19;
    myObj.type = "Ayushmaan";
    cout << "Age of myObj is : " << myObj.age << endl;
    cout << "Type of myObj is : " << myObj.type << endl;
    // cout << "Weight : " << myObj.weight << endl; // this will give error because we are trying to access a private mared member of  class

    myObj.eat();
    myObj.sleep();
    // we can acess private memebrs using getters and setters
    myObj.setWeight(101);
    cout << "Weight : " << myObj.getWeight() << endl;

    // Dynamic Allocation --> Creating a dynamic object --> myObj2
    // dynamic memory allocation using new keyword --> heap me memory allocate hota hai joki stack ke comparison me kafi jyda bada hai
    Animal *myObj2 = new Animal;

    (*myObj2).age = 15;
    (*myObj2).type = "Cat";

    // alternate dynamic
    myObj2->age = 17;
    myObj2->type = "baby";

    myObj2->eat();
    myObj2->sleep();
    cout << "\nDubara se smjhte hai constructor call \n"
         << endl;

    //  calling contructors

    Animal a;                        // ye wo contructor ko call krega jaha parameters nhi hai
    Animal *b = new Animal(100);     // ye wo costructor ko doondhke call krega jaha 1 parameters hai
    Animal *c = new Animal(40, 100); // ye wo costructor ko doondhke call krega jaha 2 parameters hai and so on for more parametrs
    Animal *d = new Animal(100, 10, "Ayushmaan");

    // copying objects
    Animal e = a;
    Animal f(*b);
    Animal animalCopy(e);

    Animal p;
    p.age = 20;
    p.setWeight(96500);
    p.type = "Shandilya";

    Animal q = p;
    cout << "p -> ";
    p.print();
    cout << "q -> ";
    q.print();

    p.type[0] = 'K';
    cout << "p -> ";
    p.print();

    // Destrucotr gets called automatically in the objects created with static memeory allocation
    cout << " y object creation " << endl;
    Animal y;
    y.age = 25;
    // destructor memeory free krta hai
    // Destrucotr have to be called manually in the objects created with dynamic memeory allocation
    cout << " z object creation " << endl;
    Animal* z = new Animal();
    z->age = 25;
    // manually deleting / calling destuctor for objects created using dynmaic memory allocation i.e., using new keyword
    delete z;
    return 0;
}