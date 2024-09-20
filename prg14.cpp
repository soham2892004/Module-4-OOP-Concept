

#include <iostream>

using namespace std;

class Employee
{
   private:
     string name;
     int empId;
     double salary;

    public:
     
    void getDetail()
    {
        cout<<"\nenter employee id and name:";
        cin>>empId>>name;


    }

    
    void setSalary(double baseSalary, double performanceBonus) {
        
        salary = baseSalary * (1.0 + performanceBonus / 100.0);
    }

    
    void displayInfo() {
        cout << "Employee ID: " << empId << "\nName: " << name << "\nSalary: " << salary << endl;
    }
};
      

int main() {
    
    Employee emp;
    emp.getDetail();

    
    emp.setSalary(50000.0, 10.0);

    
    emp.displayInfo();

    return 0;
}
