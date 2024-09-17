 #include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    vector<int> data;
    int size;

public:
    
    Matrix(int n) : size(n) {
        data.resize(size);
    }

    
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            cout << "Error: Matrix sizes must be the same for addition." << endl;
            return *this; 
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    
    void inputMatrix() {
        cout << "Enter " << size << " elements for the matrix:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }
    }


    void displayMatrix() {
        cout << "Matrix elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int matrixSize;
    cout << "Enter the size of the 1D matrices: ";
    cin >> matrixSize;

    Matrix matrix1(matrixSize);
    Matrix matrix2(matrixSize);

    cout << "Enter elements for the first matrix:" << endl;
    matrix1.inputMatrix();

    cout << "Enter elements for the second matrix:" << endl;
    matrix2.inputMatrix();

    Matrix resultMatrix = matrix1 + matrix2;
    cout << "Resultant matrix after addition:" << endl;
    resultMatrix.displayMatrix();


}
