#include <iostream>

using namespace std;

class AreaCalculator {
public:
    double calculateArea1(double radius) {
        return 3.14159 * radius * radius;
    }

    double calculateArea2(double length, double breadth) {
        return length * breadth;
    }

    double calculateArea3(double base, double height, bool isTriangle = true) {
        if (isTriangle)
            return 0.5 * base * height;
        else
            return base * height; 
    }
};

int main() {
    AreaCalculator calculator;

    double circleRadius = 5.0;
    double rectangleLength = 6.0;
    double rectangleBreadth = 4.0;
    double triangleBase = 8.0;
    double triangleHeight = 3.0;

    cout << "Area of circle: " << calculator.calculateArea1(circleRadius) << endl;
    cout << "Area of rectangle: " << calculator.calculateArea2(rectangleLength, rectangleBreadth) << endl;
    cout << "Area of triangle: " << calculator.calculateArea3(triangleBase, triangleHeight) << endl;

    
}
