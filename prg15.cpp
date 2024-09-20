 #include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    
    void getDate1()
    {
        cout<<"enter date,month and year:";
        cin>>day>>month>>year;
    }

    
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    
    void getDate(int& d, int& m, int& y) const {
        d = day;
        m = month;
        y = year;
    }

    
    bool isValidDate() const {
        if (month < 1 || month > 12 || day < 1)
            return false;

        
        const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (day > daysInMonth[month])
            return false;

        return true;
    }
};

int main() {
    Date myDate;
    myDate.getDate1(); 

    int d, m, y;
    myDate.getDate(d, m, y);
    cout << "Initial date: " << d << "/" << m << "/" << y << endl;


    myDate.setDate(15, 8, 2024);

    
    if (myDate.isValidDate()) {
        myDate.getDate(d, m, y);
        cout << "Updated date: " << d << "/" << m << "/" << y << endl;
    } else {
        cout << "Invalid date!" << endl;
    }

    
}
