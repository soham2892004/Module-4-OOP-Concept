 #include <iostream>

using namespace std;

class Address {
public:
    string street;
    string city;
    string state;
    string pincode;

    
    Address(const string& s, const string& c, const string& st, const string& p)
        : street(s), city(c), state(st), pincode(p) {}
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;
    Address studentAddress; 

public:
    
    Student(const string& n, const string& cls, int roll, double m, const Address& addr)
        : name(n), studentClass(cls), rollNumber(roll), marks(m), studentAddress(addr) {}

    
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else
            return 'F';
    }

    
    void displayInfo() {
        cout << "Name: " << name << "\tClass: " << studentClass << "\tRoll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << "\tGrade: " << calculateGrade() << endl;
        cout << "Address: " << studentAddress.street << ", " << studentAddress.city
             << ", " << studentAddress.state << " - " << studentAddress.pincode << endl;
    }
};

int main() {
    Address studentAddr("123 Main St", "Cityville", "Stateville", "12345");
    Student myStudent("utsav rakholiya", "12th Grade", 101, 85.5, studentAddr);

    myStudent.displayInfo();

    
}
