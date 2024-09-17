#include <iostream>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:

    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    
    bool isEquilateral() {
        return (side1 == side2) && (side2 == side3);
    }

    
    bool isIsosceles() {
        return (side1 == side2) || (side2 == side3) || (side1 == side3);
    }

    
    bool isScalene() {
        return !isEquilateral() && !isIsosceles();
    }
};

int main() {
    double s1, s2, s3;
    cout << "Enter the lengths of three sides of the triangle:" << endl;
    cin >> s1 >> s2 >> s3;

    Triangle myTriangle(s1, s2, s3);

    if (myTriangle.isEquilateral()) {
        cout << "It's an equilateral triangle." << endl;
    } else if (myTriangle.isIsosceles()) {
        cout << "It's an isosceles triangle." << endl;
    } else {
        cout << "It's a scalene triangle." << endl;
    }

    
}
