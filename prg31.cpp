 #include <iostream>


template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 5;
    int intArray[size] = {5, 2, 9, 1, 7};

    std::cout << "Before sorting:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    
    bubbleSort(intArray, size);

    std::cout << "After sorting:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

}
