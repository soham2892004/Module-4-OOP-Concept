 #include <iostream>

using namespace std;

class StudentDetails {
protected:
    string name;
    int rollNumber;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

class StudentMarks {
protected:
    int marks[5]; 

public:
    void inputMarks() {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int calculateTotalMarks() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return total;
    }

    double calculateAverageMarks() {
        return static_cast<double>(calculateTotalMarks()) / 5.0;
    }
};

class MarkSheet : public StudentDetails, public StudentMarks {
public:
    void displayMarkSheet() {
        cout << "\nMark Sheet:\n";
        cout << "Name: " << name << "\tRoll Number: " << rollNumber << endl;
        cout << "Subject-wise Marks:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "Average Marks: " << calculateAverageMarks() << endl;
    }
};

int main() {
    MarkSheet myMarkSheet;
    myMarkSheet.inputDetails();
    myMarkSheet.inputMarks();
    myMarkSheet.displayMarkSheet();

}
