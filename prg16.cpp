 #include <iostream>

using namespace std;

class Address {
public:
    string street;
    string city;
    string state;
    string pincode;

    void getInformation()
    {
        cout<<"enter street,city,state and pincode:";
        cin>>street>>city>>state>>pincode;
    }
    
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;
    Address studentAddress; 

public:
    void getDetail()
    {
        cout<<"enter name,student class,roll number,marks:";
        cin>>name>>studentClass>>rollNumber>>marks;
    }
    
    

    
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
        
    }
};

int main() {
    Address studentAddr;
    studentAddr.getInformation();
    Student myStudent;
    myStudent.getDetail();

    myStudent.displayInfo();

    
}
