#include<iostream>
int main() {
    //an array is a data structure that can store a fixed-size sequential collection of elements of the same type. In C++, arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value. Each element in an array is identified by an index, with the first element at index 0. Arrays can be of any data type, including primitive types like int, float, and char, as well as user-defined types. They are useful for storing collections of data and performing operations on them efficiently.
    //values in an array are stored in contiguous memory locations, which allows for efficient access and manipulation of the elements. The size of an array must be known at compile time, and it cannot be changed during runtime. However, C++ provides other data structures like vectors that offer dynamic sizing capabilities.
    //accessed using an index, which starts from 0 for the first element. For example, in an array of size 5, the valid indices are 0, 1, 2, 3, and 4. Attempting to access an index outside this range can lead to undefined behavior.
    //kind of like a variable that can hold multiple values of the same type, arrays are useful for storing collections of data and performing operations on them efficiently. They are commonly used in scenarios where a fixed number of elements need to be stored and accessed, such as in mathematical computations, data processing, and algorithm implementations.
    int arr[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    //array syntax: data_type array_name[array_size] = {value1, value2, ..., valueN};
    std::cout << "Array elements: ";
    for(int i = 0; i < 5; i++) {
        std::cout << arr[i] << " "; // Access and print each element of the array
    }
    std::cout << std::endl;

    std::string cars[3] = {"porshe","ferrari","lambo"}; // Declare and initialize an array of strings
    std::cout << "Car values: "<<cars[1];
    
   
    std::cout << std::endl;

    //iterating through the array using a range-based for loop
    std::cout << "Iterating through the array using a range-based for loop: ";
    for(const auto& car : cars) {
        std::cout << car << " "; // Access and print each element of the array
    }
    std::cout << std::endl;

    //foreach loop is a simplified way to iterate through the elements of an array or any other container in C++. It automatically handles the iteration process, eliminating the need for manual index management. The syntax involves using the 'for' keyword followed by a colon and the container being iterated over. The loop variable represents each element in the container during each iteration. This approach enhances code readability and reduces the likelihood of errors associated with traditional for loops, such as off-by-one errors or incorrect index handling. It is particularly useful when you want to perform operations on each element of an array or collection without needing to know the specific indices.
    //loop that eases the traversal of arrays and other containers, allowing for cleaner and more readable code. It is especially useful when the index of the elements is not required for the operation being performed. The range-based for loop can be used with arrays, vectors, and other standard library containers, making it a versatile tool in C++ programming.
    //itterable data set is a collection of elements that can be traversed or iterated over, allowing access to each element in a sequential manner. In C++, arrays, vectors, and other standard library containers are examples of iterable data sets. These data structures provide mechanisms to access their elements one at a time, typically through loops or iterators. Iteration enables programmers to perform operations on each element, such as processing, modifying, or aggregating data. The ability to iterate over data sets is fundamental in programming, as it allows for efficient manipulation and analysis of collections of data.
    //example of foreach loop in C++ using a range-based for loop to iterate through an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};
    std::cout << "Numbers in the array: ";
    for(const auto& number : numbers) {
        std::cout << number << " "; // Access and print each element of the array
    }
    std::cout << std::endl;



    return 0;
}