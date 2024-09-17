 #include <iostream>
using namespace std;

class MathOperations {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    double subtract(double x, double y) {
        return x - y;
    }

    
    float multiply(float p, float q) {
        return p * q;
    }

    
    long divide(long m, long n) {
        if (n != 0)
            return m / n;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    MathOperations math;


    cout << "Addition: " << math.add(10, 20) << endl;
    cout << "Subtraction: " << math.subtract(15.5, 7.2) << endl;
    cout << "Multiplication: " << math.multiply(3.14f, 2.5f) << endl;
    cout << "Division: " << math.divide(100L, 5L) << endl;

    
}
