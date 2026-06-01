// Map_UnamePword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

class Student {
private:
    string name;
    string course;
    string password;
public:
    string getInfo() {
        return name + " | " + course;
    }

    Student(string name, string course) {
        this->name = name;
        this->course = course;
    }

};






int main()
{
    cout << "Map: Username and Password" << endl;

    map<string, string> userData;

	userData["john_doe"] = "password123";

    string nameSearch = "john_doe";

    if (userData.find(nameSearch) != userData.end()) {
        cout << "User found: " << nameSearch << endl;
    } else {
        cout << "User not found: " << nameSearch << endl;
    }




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
