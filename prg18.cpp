 #include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0; 
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }
};

int main() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle myRectangle(length, width);
    double area = myRectangle.calculateArea();

    cout << "Area of the rectangle: " << area << endl;

    
}
