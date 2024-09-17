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
    Student myStudent("harvik mendapara", 35, 85.5);
    Teacher myTeacher("amit sharma", 25, 60000.0);

    cout << "\nStudent Details:\n";
    myStudent.displayStudentData();

    cout << "\nTeacher Details:\n";
    myTeacher.displayTeacherData();

    
}
