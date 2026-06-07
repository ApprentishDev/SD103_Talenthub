// returnClassname.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    std::string name;
    int score;
    std::string course1;
    std::string course2;
    std::string course3;

    Player(string n, int s, string c1, string c2, string c3) : name(n), score(s), course1(c1), course2(c2), course3(c3) {}
};

// Function that returns a class instance by value
Player createPlayer(string name, int score, string course1, string course2, string course3) {
    Player temp(name, score, course1, course2, course3);
    return temp;
}

int main() {
     string courseValue;
     string inputValue;
     

    // The instance is seamlessly moved or elided directly into 'p1'
    Player p1 = createPlayer("Student1", 100, "Geometry", "Advanced Prog", "Program Design I");

    //Make modifications here
	Player currentPlayer = createPlayer("Student 1", 100, "Geometry", "Advanced Prog", "Program Design I");
    cout << "Name: " << currentPlayer.name << endl;
    cout << "Course1: " << currentPlayer.course1 << endl;
    cout << "Course1: " << currentPlayer.course2 << endl;
    cout << "Course1: " << currentPlayer.course3 << endl;

    cout << "" << endl;
    cout << "input course for course 1: ";

    getline(cin,inputValue);
    currentPlayer.course1 = inputValue;

    cout <<"Name: " << currentPlayer.name << endl;
    cout <<"Course1: " << currentPlayer.course1 << endl;
    cout <<"Course1: " << currentPlayer.course2 << endl;
    cout <<"Course1: " << currentPlayer.course3 << endl;

    cout << "" << endl;
    cout << "" << endl;
    
    //swap code here
    p1 = currentPlayer;

    cout << "Name: " << p1.name << endl;
    cout << "Course1: " << p1.course1 << endl;
    cout << "Course1: " << p1.course2 << endl;
    cout << "Course1: " << p1.course3 << endl;

    

    cout << currentPlayer.course1 << endl;


	

   
    



    //change vallues

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
