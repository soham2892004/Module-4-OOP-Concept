#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}

    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
};

class Student : public Person {
private:
    double percentage;

public:
    Student(const string& n, int a, double p) : Person(n, a), percentage(p) {}

    void readStudentData() {
        readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() {
        displayData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    Teacher(const string& n, int a, double s) : Person(n, a), salary(s) {}

    void readTeacherData() {
        readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() {
        displayData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    
    cout << "Enter student details:\n";
    string studentName;
    int studentAge;
    double studentPercentage;

    cout << "Student name: ";
    cin >> studentName;
    cout << "Student age: ";
    cin >> studentAge;
    cout << "Student percentage: ";
    cin >> studentPercentage;

    Student myStudent(studentName, studentAge, studentPercentage);

    
    cout << "\nEnter teacher details:\n";
    string teacherName;
    int teacherAge;
    double teacherSalary;

    cout << "Teacher name: ";
    cin >> teacherName;
    cout << "Teacher age: ";
    cin >> teacherAge;
    cout << "Teacher salary: ";
    cin >> teacherSalary;

    Teacher myTeacher(teacherName, teacherAge, teacherSalary);

    
    cout << "\nStudent Details:\n";
    myStudent.displayStudentData();

    cout << "\nTeacher Details:\n";
    myTeacher.displayTeacherData();

    return 0;
}
