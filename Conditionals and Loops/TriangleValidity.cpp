#include <iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout << "Enter sides a , b , c : ";
    cin >> a >> b >> c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        cout << "It is possible to create triangle with sides "<< a << " , " << b << " and " << c;
    }
    else{
        cout << "It is not possible to create triangle with sides "<< a << " , " << b << " and " << c;
    }
    return 0;
}