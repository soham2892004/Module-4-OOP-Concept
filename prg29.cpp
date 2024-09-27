#include <iostream>

using namespace std;
struct NumberPair {
    int num1;
    int num2;
};


class MaxNumberFinder {
public:
    
    static int findMax(const NumberPair& pair) {
        return (pair.num1 > pair.num2) ? pair.num1 : pair.num2;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    NumberPair pair{a, b}; 
    int max = MaxNumberFinder::findMax(pair);

    cout << "The maximum of " << a << " and " << b << " is: " << max << std::endl;

    
}
