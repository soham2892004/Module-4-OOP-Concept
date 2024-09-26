#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {
        cout << "Person constructor called for " << name << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;

public:
    Student(const string& n, int roll) : Person(n), rollNumber(roll) {
        cout << "Student constructor called for roll number " << rollNumber << endl;
    }
};

class Result : public Student {
private:
    double marks;

public:
    Result(const string& n, int roll, double m) : Student(n, roll), marks(m) {
        cout << "Result constructor called for marks " << marks << endl;
    }

    void displayResult() {
        cout << "Name: " << name << "\tRoll Number: " << rollNumber << "\tMarks: " << marks << endl;
    }
};

int main() {
    string studentName;
    int studentRoll;
    double studentMarks;

    cout << "Enter student name: ";
    cin >> studentName;

    cout << "Enter student roll number: ";
    cin >> studentRoll;

    cout << "Enter student marks: ";
    cin >> studentMarks;

    Result myResult(studentName, studentRoll, studentMarks);
    myResult.displayResult();

    
}
