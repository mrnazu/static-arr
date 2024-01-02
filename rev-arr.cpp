#include <iostream>
using namespace std;

int main() {
    // Iordered array
    int orderedArray[4] = {1, 2, 3, 4};

    // reversed array
    int reversedArray[4];

    // for loop to iterate through the elements of the ordered array
    for (int i = 0; i < 4; ++i) {
        // Assign each element from the ordered array to the corresponding position in the reversed array
        reversedArray[3 - i] = orderedArray[i];
    }

    // Print the original array
    cout << "Original Array: ";
    for (int i = 0; i < 4; ++i) {
        cout << orderedArray[i] << " ";
    }

    // Print a newline for better formatting
    cout << endl;

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < 4; ++i) {
        cout << reversedArray[i] << " ";
    }

    // Print a newline for better formatting
    cout << endl;

    return 0;
}
