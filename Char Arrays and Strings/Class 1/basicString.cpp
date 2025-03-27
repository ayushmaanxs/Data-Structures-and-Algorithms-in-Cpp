#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // creation
    string name;

    // input
    // cin >> name;

    // to take inputs with spaces and tabs---> use getline function
    getline(cin, name);

    // print
    cout << "Printing Name: " << name << endl;

    cout << "Printing first char: " << name[0] << endl;
    // printing all character of string individually
    int index = 0;
    while (name[index] != '\0')
    {
        cout << "Printing index: " << index << "th char: " << name[index] << endl;
        index++;
    };
    // empty string
    string temp = "";
    cout << "Length of string : " << name.length() << endl;
    cout << "String is empty or not : " << temp.empty() << endl;
    cout << "Character at position 0 is : " << name.at(0) << endl;
    cout << "Front character of string is : " << name.front() << endl;
    cout << "Back character of string is : " << name.back() << endl;

    string str1 = "Ayushmaan";
    string str2 = "Shandilya";

    cout << "Before Appending" << endl;
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl;

    // append
    str1.append(str2); // str1 mein str2 ko append kro

    cout << "After Appending" << endl;
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl;

    // erase
    string desc = "This is a car";
    desc.erase(4, 3);
    cout << "Erasing from 4th index till next 3 indexes i.e, 4 to 6:  " << desc << endl;

    // insert
    string names = "Ayushmaan Shandilya";
    string middle = "Khushi ";
    names.insert(11, middle);
    cout << "Printing inserted name on 11th index: " << names << endl;

    // push and pop
    string doggy = "Ayushmaan";
    cout << "Undestanding push and pop : " << doggy << endl;

    doggy.push_back('X');
    cout << "Pushing X: " << doggy << endl;
    doggy.pop_back();
    cout << "Poping Out: " << doggy << endl;

    // finding any substring inside a string
    string str3 = "Yaar tera super star desi kalakaar";
    string str4 = "star";
    // npos = no position found
    if (str3.find(str4) == string::npos)
    {
        // not found
        cout << "Not found " << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    // comparing 2 strings
    string str5 = "Ayushmaan";
    string str6 = "Ayushmaan";
    if (str5.compare(str6) == 0)
    {
        cout << "Matching" << endl;
    }
    else
    {
        cout << "Not Matching " << endl;
    }

    // printing any part of a string i.e., printing substring
    string subWalaString = "This is a car , big daddy of all SUVs ";
    cout << subWalaString.substr(20,5) << endl;
    return 0;
}