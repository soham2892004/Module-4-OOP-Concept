#include <iostream>
#include <cmath>
using namespace std;

class AreaCalculator {
public:
    
    double calculateArea(double radius) {
        return 3.14159 * radius * radius;
    }

    
    double calculateArea(double length, double breadth) {
        return length * breadth;
    }

    
    double calculateArea(double base, double height, bool isTriangle = true) {
        if (isTriangle)
            return 0.5 * base * height;
        else
            return -1.0; 
    }
};

int main() {
    AreaCalculator calculator;

    double circleRadius = 5.0;
    double rectangleLength = 6.0;
    double rectangleBreadth = 4.0;
    double triangleBase = 8.0;
    double triangleHeight = 3.0;

    cout << "Area of circle: " << calculator.calculateArea(circleRadius) << endl;
    cout << "Area of rectangle: " << calculator.calculateArea(rectangleLength, rectangleBreadth) << endl;
    cout << "Area of triangle: " << calculator.calculateArea(triangleBase, triangleHeight) << endl;


}
