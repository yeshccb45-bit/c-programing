//pointers program
#include <iostream>
int main() {
    
    //pointers are variables that store the memory address of another variable. They allow for direct manipulation of memory and enable dynamic memory allocation, efficient data structures, and function parameter passing by reference. In C++, pointers are declared using the asterisk (*) symbol, and they can point to variables of any data type. The address-of operator (&) is used to obtain the memory address of a variable, while the dereference operator (*) is used to access or modify the value stored at the memory address pointed to by the pointer. Pointers are powerful tools in C++ programming, but they require careful management to avoid issues such as dangling pointers, memory leaks, and undefined behavior.
    int var = 42; // Declare an integer variable
    int* ptr = &var; // Declare a pointer and assign it the address of var

    std::cout << "Value of var: " << var << std::endl; // Output the value of var
    std::cout << "Address of var: " << &var << std::endl; // Output the address of var
    std::cout << "Value stored in ptr (address of var): " << ptr << std::endl; // Output the value stored in ptr (address of var)
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // Dereference ptr to get the value of var

    *ptr = 100; // Modify the value of var through the pointer
    std::cout << "New value of var after modification through ptr: " << var << std::endl; // Output the new value of var

    return 0;
}