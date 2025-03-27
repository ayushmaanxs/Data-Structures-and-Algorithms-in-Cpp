// compile time polymorphism
//  functionOverloading mein same nam ka function different type ke arguemnt leke different type ki processing kr rha hai
#include <iostream>
using namespace std;
class Maths {
    public:

    int sum(int a , int b){
        cout << "I am in first signature" << endl;
        return a + b;
    }
    int sum (int a , int b , int c){
        cout << "I am in second signature" << endl;
        return a+b+c;
    }
    int sum (int a , double b){
        cout << "I am in third signature double wala"<< endl;
        return a+b;
    }
    int sum (int a , float b){
        cout << "I am in third signature float wala"<< endl;
        return a+b;
    }
};
int main(){
    Maths obj;
    cout << obj.sum(2,5) <<endl;
    cout << obj.sum(2,5,10) <<endl;
    cout << obj.sum(2,5.5) <<endl;  // by default 5.5 double treat hoga
    cout << obj.sum(2,5.6f) <<endl; // use 'f' at last to treat it like float
    return 0;
}

// Function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameter lists. These differences can be in the number of parameters or the types of parameters the functions accept. 

