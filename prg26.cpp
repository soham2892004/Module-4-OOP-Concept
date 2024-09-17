 #include <iostream>
#include <string>
using namespace std;

class StringConcatenator {
private:
    string str;

public:
    StringConcatenator(const string& initialStr) : str(initialStr) {}

    
    StringConcatenator operator+(const StringConcatenator& other) {
        StringConcatenator result(str + other.str);
        return result;
    }

    void displayString() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    StringConcatenator str1("Hello, ");
    StringConcatenator str2("c++");

    StringConcatenator concatenatedStr = str1 + str2;
    concatenatedStr.displayString();

    
}
