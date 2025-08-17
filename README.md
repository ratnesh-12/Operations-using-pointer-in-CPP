# Experiment 10
C++ Pointers Exploration
Objective
To investigate and apply pointers in C++ for effective memory management, data manipulation, and optimized data handling.
Tools and Technologies

IDE: Any C++ compatible IDE
Operators: Address-of (&), Dereference (*)
Concepts: Variables, memory addresses, pointer arithmetic

Background
Pointers in C++ are special variables that hold memory addresses of other variables, enabling direct access and modification of data in memory. They are essential for efficient memory use and are widely used in:

Allocating memory dynamically
Passing large data structures to functions
Handling arrays and strings
Creating advanced data structures like linked lists or graphs

Key Concepts
1. Understanding Pointers
A pointer stores the memory address of a variable. Key operators include:

& to obtain a variable's memory address
* to access or modify the value at a memory address

Syntax:
type *pointerName;

Applications:

Modifying variable values through their memory addresses
Efficiently iterating over arrays
Supporting dynamic memory allocation with new and delete
Enabling functions to return multiple values

Sample Code:
#include <iostream>
using namespace std;

int main() {
    int value = 15;
    int *ptr = &value; // Pointer holds address of value

    cout << "Value: " << value << endl;
    cout << "Address: " << &value << endl;
    cout << "Pointer value: " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;

    *ptr = 25; // Update value via pointer
    cout << "Updated value: " << value << endl;

    return 0;
}

Output:
Value: 15
Address: 0x7ffee4a2eabc
Pointer value: 0x7ffee4a2eabc
Value at pointer: 15
Updated value: 25

2. Pointer Arithmetic
Pointers support operations like:

Increment (ptr++): Moves to the next memory location based on data type size
Decrement (ptr--): Moves to the previous memory location
Arithmetic with integers to navigate memory

3. Null and Dangling Pointers

Null Pointer: Set to nullptr to avoid unintended memory access
Dangling Pointer: Points to invalid or freed memory, which should be avoided

Experiments
A. Pointer Arithmetic Demonstration
This experiment showcases how pointer increments vary with data type sizes (int, float, char, double). It displays memory addresses before and after incrementing pointers.
Steps:

Declare variables: int a = 10, float b = 5.5, char ch = 'x', double d = 2.718
Assign pointers to their addresses
Print addresses before and after incrementing each pointer
Observe address changes based on data type sizes (e.g., int: +4 bytes, double: +8 bytes)

B. Pointer Arithmetic in Arrays
This program performs arithmetic operations (sum and difference) on array elements using pointers.
Steps:

Initialize array: int arr[] = {10, 20, 30, 40, 50}
Set pointers: p1 to arr[1] (20), p2 to arr[3] (40)
Compute and display: *p2 - *p1 and *p2 + *p1

C. Array Traversal with Pointers
This experiment traverses an array forward and backward using a pointer.
Steps:

Initialize array: int arr[] = {10, 20, 30, 40, 50}
Set pointer to array's base address
Traverse forward: Print *(ptr + i) for i from 0 to 4
Traverse backward: Print *(ptr + i) for i from 4 to 0

D. String Traversal Using Pointers
This program prints a string character by character using a pointer.
Steps:

Declare a character array str and a pointer ptr
Prompt user for a string and store in str
Set ptr to str's base address
Loop until ptr reaches \0, printing each character

Conclusion
These experiments highlight the versatility of pointers in C++ for memory management, array traversal, and string manipulation. Pointers enable efficient data handling by directly accessing memory, with arithmetic operations adapting to data type sizes. Understanding null and dangling pointers ensures safer programming practices.
