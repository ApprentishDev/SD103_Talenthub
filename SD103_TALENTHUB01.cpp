// SD103_TALENTHUB01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//USE CAMELCASE

#include <iostream>
#include <vector>
#include <map>
using namespace std;


class User {

private:

    string firstName;
    string lastname;
    int idNumber;
public:

    User(string firstName, string lastname, int idNumber) {
        this->firstName = firstName;
        this->lastname = lastname;
        this->idNumber = idNumber;
    }

    void getInfo() {

        cout << "\n | First name: " << firstName;
        cout << "\n | Last name: " << lastname;
        cout << "\n | ID Number: " << idNumber << endl;
    }

    string getName() const {
        return firstName + " " + lastname;
    }
};



class Student : public User {

private:
    std::string name;
  

public:


    Student(string firstName, string lastname, int idNumber) : User(firstName, lastname, idNumber) {
    };


};

class Course {
private:
    std::string courseName;

public:

    Course(string courseName) {
        this->courseName = courseName;
    }

};

int main()
{

    //run 1 = admin
    int run = 1;
    int program = 1;
    int option, stOption;
    string studentIn;
    std::cout << "Hello World!\n";

    vector<Student> dmtcStudents;

    vector<Student> intlStudents;

    //MAP for username and password registered
    map<string, string> userDatas;

    //-------Sample contents---------------------
    Student student2("Britney", "Spranks", 10052);
    Student student1("Spongebob", "Squarepants", 12345);
    Student student3("Batman", "Mbiyonde", 1998);

    Student student4("Rom", "Jerusalem", 3119);

    dmtcStudents.push_back(student2);
    dmtcStudents.push_back(student1);
	intlStudents.push_back(student4);
	dmtcStudents.push_back(student3);

    
   
    //STUDENT START
    while (program == 1){

        cout<<"------TALENTHUB------|"<<endl;
        cout << "[1] Student Sign in" << endl;
        cout << "[2] Student Sign up" << endl;
	    cout << "[3] Admin Sign in" << endl;
        cin.clear();
	    cin >> run;

        switch (run) {

            case 1: {
                cout << "\n---------------------------------" << endl;
                cout << "\n--- Student Management System ---" << endl;
                cout << "\n---------------------------------" << endl;
                cout << "\n--------      STUDENT       -------" << endl;
                cout << "\n---------------------------------" << endl;



                cout << "\n[1] Sign-up to additional course (0/3)" << endl;
                cout << "\n[2] Logout" << endl;
                cin >> stOption;
                    switch (stOption) {
                        case 1: {
                            cout << "[1] Selected\n";
                            cout << "------------------------------| \n";
                            cout << "Available courses: \n";

                            break;
						}

                        case 2: {
                            cout << "[2] Selected\n";
                            run = 0;
							break;
                        }

					}

                break;
                //While run==1 end
            }
    

           //STUDENT SIGN UP START
            case 2: {
		        string pwAttempt1, pwAttempt2;
		        string studentEmail, fullName;
		        int mobileNumber;
                cout << "\n---------------------------------" << endl;
                cout << "\n--- Student Management System ---" << endl;
                cout << "\n---------------------------------" << endl;
                cout << "\n-------- STUDENT SIGN UP --------" << endl;
                cout << "\n---------------------------------" << endl;
                cout << "\n";

                cout << "Please fill in the details below:";
                cout << "\n";
                cout << "\n(This will serve as your username)";
                cout<<"\nEmail: ";
              	cin >> studentEmail;
                password:
                cout << "\npassword: ";
                cin>>pwAttempt1;
		        cout << "\nConfirm password: ";
		        cin >> pwAttempt2;
                if (pwAttempt1 == pwAttempt2) {
                    goto signup2;
                }
                else {
			        cout << "Passwords do not match. Please try again.\n";
                    goto password;
          
                }
                signup2:
                cout << "\nFull name: ";
                cin >> fullName;
                cout << "Mobile number:";
                cin >> mobileNumber;

                cout << "\n-----------------------------------------" << endl;
                cout << "\n-------- REGISTRATION SUCCESSFUL --------" << endl;
                cout << "\n-----------------------------------------" << endl;
                cout << "Registration successful for user: "<<studentEmail << endl;
                cout << "\n";

                //getline
                run = 1;
                break;
        


            }

	        //ADMIN START
            case 3: {
                cout << "\n---------------------------------" << endl;
                cout << "\n--- Student Management System ---" << endl;
                cout << "\n---------------------------------" << endl;
                cout << "\n--------      ADMIN       -------" << endl;
                cout << "\n---------------------------------" << endl;
                cout << "[1] Add Student "<<endl;
                cout << "[2] Search student by name "<<endl;
                cout << "[3] View domestic students list "<<endl;
                cout << "[4] View international students list "<<endl;
                cout << "[5] View all students list "<<endl;
                cout << "[6] Quit "<<endl;

                cin >> option;

                switch (option) {
                case 1: { //WORKING

                    string firstName, lastName;
                    int idNumber;
                    int status;
                    cout << "[1] Selected\n";
                    //Add student code
                    cout << "Enter student name: ";
                    cin >> firstName;
                    cout << "Enter student last name: ";
                    cin >> lastName;
                    cout << "Enter student ID: ";
                    cin >> idNumber;
                    cout << "Select the one that applies (1 for Domestic, 2 for International): ";
                    cin >> status;

                    if (status == 0) {
                        cout << "Invalid selection. Please select 1 for Domestic or 2 for International.\n";
                    }
                    if (status == 1) {
                        Student newStudent(firstName, lastName, idNumber);
                        dmtcStudents.push_back(newStudent);

                        for (int i = 0; i < dmtcStudents.size(); i++) {
                            dmtcStudents[i].getInfo();
                        }
                        break;
                    }
                    if (status == 2) {
                        Student newStudent(firstName, lastName, idNumber);
                        intlStudents.push_back(newStudent);

                        for (int i = 0; i < intlStudents.size(); i++) {
                            intlStudents[i].getInfo();
                        }
                        break;
                    }
                    else {
                        cout << "Invalid selection. Please select 1 for Domestic or 2 for International.\n";
                    }


                    break;
                }


                case 2: {  //SEARCH STUDENT BY NAME
            
                }

		        case 3: { // VIEW DOMESTIC STUDENTS 
			        cout << "[3] Selected\n";
                    cout << "Domestic students Enrolled:" << endl;
                    for (int i = 0; i < dmtcStudents.size(); i++) {
                        dmtcStudents[i].getInfo();
                    }


                    break;
                }

		        case 4: { // VIEW INTERNATIONAL STUDENTS - working
                    cout << "[4] Selected\n";
                    cout << "International students Enrolled:" << endl;
                    for (int i = 0; i < intlStudents.size(); i++) {
                        intlStudents[i].getInfo();
			        }   
            
                    break;
          
                }

		        case 5: { //VIEW ALL STUDENTS - working
                    cout << "[5] Selected\n";
                    cout << "\n-------------------------------|" << endl;
                    cout << "Domestic students Enrolled:" << endl;
                    for (int i = 0; i < dmtcStudents.size(); i++) {
                        dmtcStudents[i].getInfo();
                    }

                    cout << "\n--------------------" << endl;
                    cout << "\n-------------------------------|" << endl;
                    cout << "International students enrolled:" << endl;

                    for (int i = 0; i < intlStudents.size(); i++) {
                        intlStudents[i].getInfo();
                    }
                    cout << "\n--------------------" << endl;
                    break;
                }





                }


            //While run==2 end
            }

        //option end
        }
    //while end
    }
	
//main end
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
