// CPP_Student_Course_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    std::string name;
    // Putting a vector inside the class:
    std::vector<int> testScores;
	vector<string> coursesEnrolled; // Another vector to hold course names

public:
    // Constructor
    Student(std::string studentName) : name(studentName) {}

    // Method to add data to the vector
    void addScore(int score) {
        testScores.push_back(score);
    }

    // Method to print vector data
    void printScores() {
        std::cout << name << "'s scores: ";
        for (int score : testScores) {
            std::cout << score << " ";
        }
        std::cout << std::endl;
    }

    std::string  getName() const {
        return name;
	}

    void enrollInCourse(const std::string& courseName) {
        coursesEnrolled.push_back(courseName);
    }
    void printEnrolledCourses() {
        std::cout << name << " is enrolled in: ";
        for (const std::string& course : coursesEnrolled) {
            std::cout << course << " ";
        }
        std::cout << std::endl;
	}
};

class Course {
private:
    std::string courseName;
    std::vector<Student> enrolledStudents;

public:
    Course(std::string name) : courseName(name) {}

    void enrollStudent(const Student& student) {
        enrolledStudents.push_back(student);
    }

    void printEnrolledStudents() {
        std::cout << "Students enrolled in " << courseName << ": ";
        for (const Student& student : enrolledStudents) {
            std::cout << student.getName() << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Student myStudent("Alice");
    myStudent.addScore(95);
    myStudent.addScore(88);
    myStudent.addScore(100);

    myStudent.printScores(); // Outputs: Alice's scores: 95 88 100


	Course myCourse1("Mathematics");
	myCourse1.enrollStudent(myStudent);

    Student currentStudent = myStudent;


	cout << "Current student name: " << currentStudent.getName() << endl; // Outputs: Current student name: Alice
	cout << "Current student courses: ";
	currentStudent.enrollInCourse("Mathematics");
	currentStudent.printEnrolledCourses();

    return 0;
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
