#include <iostream>
using namespace std;

class Base {
private:
    int privateVarBase;

protected:
    int protectedVarBase;

public:
    int publicVarBase;

    Base() {
        privateVarBase = 10;
        protectedVarBase = 20;
        publicVarBase = 30;
    }

    void displayBaseData() {
        cout << "Base Class Data:\n";
        cout << "Private: " << privateVarBase << "\tProtected: " << protectedVarBase
             << "\tPublic: " << publicVarBase << endl;
    }
};

class Derived : public Base {
public:
    void displayDerivedData() {
        cout << "Derived Class Data:\n";
    
        cout << "Protected (inherited): " << protectedVarBase
             << "\tPublic (inherited): " << publicVarBase << endl;
    }
};

int main() {
    Derived myDerived;
    myDerived.displayDerivedData();

    


}