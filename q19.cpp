#include <iostream>
using namespace std;

class Student {
    int age;
    string name;
    int enroll_no;
    int marks;

public:
    Student(int age, string name, int enroll_no, int marks) {
        this->age = age;
        this->name = name;
        this->enroll_no = enroll_no;
        this->marks = marks;
    }

    void display() {
        cout << "Age : " << age << endl;
        cout << "Name : " << name << endl;
        cout << "Enroll No.: " << enroll_no << endl;
        cout << "Marks : " << marks << endl << endl;
    }
};

class Faculty {
    string facultyName;
    int facultyCode;
    int salary;
    string deptt;
    int age;
    int experience;
    string gender;

public:
    Faculty(string facultyName, int facultyCode, int salary, string deptt, int age, int experience, string gender) {
        this->facultyName = facultyName;
        this->facultyCode = facultyCode;
        this->salary = salary;
        this->deptt = deptt;
        this->age = age;
        this->experience = experience;
        this->gender = gender;
    }

    void display() {
        cout << "Faculty Name : " << facultyName << endl;
        cout << "Faculty Code : " << facultyCode << endl;
        cout << "Salary : " << salary << endl;
        cout << "Department : " << deptt << endl;
        cout << "Age : " << age << endl;
        cout << "Experience : " << experience << endl;
        cout << "Gender : " << gender << endl;
    }
};

class Person : public Student, public Faculty {
public:
    Person(int student_age, string student_name, int enroll_no, int marks,
           string faculty_name, int faculty_code, int salary, string deptt,
           int faculty_age, int experience, string gender)
        : Student(student_age, student_name, enroll_no, marks),
          Faculty(faculty_name, faculty_code, salary, deptt, faculty_age, experience, gender) {}

    void display() {
        cout << "Displaying Student Information:\n";
        Student::display();
        cout << "Displaying Faculty Information:\n";
        Faculty::display();
    }
};

int main() {
    Person person(20, "Aman", 123, 88, 
                  "Dr. Aman", 456, 70000, "CS", 
                  40, 15, "Male");

    person.display();

    return 0;
}
