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
//dynamic memory allocation allows for the allocation of memory at runtime, enabling the creation of data structures whose size can be determined during program execution. In C++, dynamic memory allocation is achieved using the new operator, which allocates memory on the heap and returns a pointer to the allocated memory. The delete operator is used to deallocate memory that was previously allocated with new, preventing memory leaks and ensuring efficient memory management. Dynamic memory allocation is particularly useful for creating flexible data structures such as linked lists, trees, and graphs, where the number of elements may not be known in advance. However, it requires careful handling to avoid issues such as dangling pointers and memory fragmentation.
    int* dynamicPtr = new int; // Dynamically allocate memory for an integer
    *dynamicPtr = 200; // Assign a value to the dynamically allocated memory
    std::cout << "Value stored in dynamically allocated memory: " << *dynamicPtr <<
    std::endl; // Output the value stored in dynamically allocated memory
    delete dynamicPtr; // Deallocate the dynamically allocated memory
    dynamicPtr = nullptr; // Set the pointer to nullptr after deallocation
    
    return 0;
}