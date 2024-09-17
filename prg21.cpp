 #include <iostream>

 
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    void inputRollNumber() {
        cout << "Enter student's roll number: ";
        cin >> rollNumber;
    }
};

class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    void inputTestMarks() {
        cout << "Enter marks obtained in Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter marks obtained in Subject 2: ";
        cin >> subject2Marks;
    }
};

class Result : public Test {
public:
    void displayResult() {
        cout << "\nStudent Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << (subject1Marks + subject2Marks) << endl;
    }
};

int main() {
    Result studentResult;
    studentResult.inputRollNumber();
    studentResult.inputTestMarks();
    studentResult.displayResult();

    
}
