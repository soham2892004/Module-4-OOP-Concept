 #include <iostream>

using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter cricketer's age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputCricketerData(); 
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter average runs: ";
        cin >> averageRuns;
        cout << "Enter best performance (runs in a single match): ";
        cin >> bestPerformance;
    }

    void displayBatsmanData() {
        cout << "\nBatsman Details:\n";
        cout << "Name: " << name << "\tAge: " << age << endl;
        cout << "Total Runs: " << totalRuns << "\tAverage Runs: " << averageRuns << endl;
        cout << "Best Performance (in a single match): " << bestPerformance << " runs\n";
    }
};

int main() {
    Batsman myBatsman;
    myBatsman.inputBatsmanData();
    myBatsman.displayBatsmanData();


}
