# What is Static Array
In computer programming, a static array is a fixed-size, contiguous block of memory that is allocated at compile time and cannot be resized during runtime. This means that once you define the size of a static array, it remains constant throughout the execution of the program.

Here's a simple example in C++:

```cpp
#include <iostream>

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    std::cout << "Element at index 2: " << myArray[2] << std::endl;

    myArray[2] = 10;

    std::cout << "Modified element at index 2: " << myArray[2] << std::endl;

    return 0;
}
```

In this example, `myArray` is a static array of integers with a size of 5. The elements are initialized during declaration, and you can access or modify individual elements using the array index.

Static arrays are limited in flexibility because their size is fixed at compile time. If you need a data structure that can dynamically resize itself during runtime, you might want to consider using dynamic arrays (e.g., arrays allocated with `new` and `delete` in C++), linked lists, or other dynamic data structures. 

# Task:
Write a C++ program that reverses the elements of a static array. Declare a static array, initialize it with some values, and then reverse the order of its elements. Print both the original and reversed arrays.
