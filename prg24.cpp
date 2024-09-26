#include <iostream>
using namespace std;

class MathOperations {
public:
    int a, b;
    float p, q;

    int add() {
        return a + b;
    }

    int subtract() {
        return a - b;
    }

    int multiply() {
        return a * b;
    }

    float divide() {
        if (q != 0)
            return p / q;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    MathOperations math;

    cout << "Enter value of a and b: ";
    cin >> math.a >> math.b;

    cout << "Enter value of p and q: ";
    cin >> math.p >> math.q;

    cout << "Addition: " << math.add() << endl;
    cout << "Subtraction: " << math.subtract() << endl;
    cout << "Multiplication: " << math.multiply() << endl;
    cout << "Division: " << math.divide() << endl;


}
