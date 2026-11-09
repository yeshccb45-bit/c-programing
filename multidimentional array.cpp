//multidimentional array.cpp
#include <iostream>
int main() {
    //multidimensional arrays are arrays of arrays, allowing for the storage of data in a tabular format. In C++, they can be declared with multiple dimensions, such as 2D or 3D arrays. Each element in a multidimensional array is accessed using multiple indices, corresponding to its position in each dimension. For example, a 2D array can be visualized as a matrix with rows and columns, where the first index represents the row and the second index represents the column. Multidimensional arrays are useful for representing complex data structures, such as grids, tables, and matrices, and are commonly used in applications like image processing, scientific simulations, and game development.
    //example of a 2D array
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} }; 
    // Declare and initialize a 2D array of integers
    //array syntax: data_type array_name[rows][columns] = { {row1_values}, {row2_values}, ..., {rowN_values} };
    std::cout << "2D Array elements: " << std::endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            std::cout << arr[i][j] << " "; // Access and print each element of the 2D array
        }
        std::cout << std::endl;
    }

    return 0;
}