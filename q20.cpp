#include <iostream>
using namespace std;

class University {
public:
    string universityName;

    University() : universityName("Graphic era hill university") {}

    void setUniversityName(string name) {
        universityName = name;
    }

    void displayUniversity(){
        cout << "University Name: " << universityName << endl;
    }
};

class Student : virtual public University {
public:
    string studentID;

    void setStudentID(string id) {
        studentID = id;
    }

    void displayStudent(){
        cout << "Student ID: " << studentID << endl;
    }
};

class Faculty : virtual public University {
public:
    string facultyID;

    void setFacultyID(string id) {
        facultyID = id;
    }

    void displayFaculty(){
        cout << "Faculty ID: " << facultyID << endl;
    }
};

class ResearchAssistant : public Student, public Faculty {
public:
    void displayInfo() {
        displayUniversity();
        displayStudent();
        displayFaculty();
    }
};

int main() {
    ResearchAssistant ra;
    ra.setUniversityName("Graphic era hill University");
    ra.setStudentID("S12345");
    ra.setFacultyID("F67890");
    ra.displayInfo();
    return 0;
}
