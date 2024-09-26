#include <iostream>

using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
 {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int  intArray[] = {5, 2, 9, 1, 7};
    double doubleArray[] = {3.14, 1.5, 2.718, 0.5};
    string stringArray[] = {"apple", "banana", "cherry", "date"};

    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    int stringSize = sizeof(stringArray) / sizeof(stringArray[0]);

    cout << "Before sorting int array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    bubbleSort(intArray, intSize);

    cout << "After sorting int array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    
    bubbleSort(doubleArray, doubleSize);
    bubbleSort(stringArray, stringSize);

    
}
