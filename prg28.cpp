 #include <iostream>
using namespace std;

class NumberSwapper {
private:
    int num1;
    int num2;

public:
    NumberSwapper(int a, int b) : num1(a), num2(b) {}

    
    friend void swapNumbers(NumberSwapper& ns) {
        ns.num1 = ns.num1 + ns.num2;
        ns.num2 = ns.num1 - ns.num2;
        ns.num1 = ns.num1 - ns.num2;
    }

    void displayNumbers() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    NumberSwapper ns(a, b);
    cout << "Before swapping:" << endl;
    ns.displayNumbers();

    swapNumbers(ns);

    cout << "After swapping:" << endl;
    ns.displayNumbers();


}
