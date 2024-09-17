 #include <iostream>


template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 10, int2 = 20;
    double double1 = 3.14, double2 = 2.71;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "double1 = " << double1 << ", double2 = " << double2 << std::endl;

    
    swapValues(int1, int2);

    
    swapValues(double1, double2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
    std::cout << "double1 = " << double1 << ", double2 = " << double2 << std::endl;

    
}
