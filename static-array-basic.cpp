#include <iostream>

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    std::cout << "Element at index 2: " << myArray[2] << std::endl;

    myArray[2] = 10;

    std::cout << "Modified element at index 2: " << myArray[2] << std::endl;

    return 0;
}
