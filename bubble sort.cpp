//bubble sort.cpp
#include <iostream>
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Declare and initialize an array of integers
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++)
    // The outer loop iterates through the array n-1 times, where n is the number of elements in the array. Each iteration of this loop represents a pass through the array, during which the largest unsorted element "bubbles up" to its correct position at the end of the array. The reason we only need n-1 passes is that after n-1 passes, the last remaining element must be in its correct position, so no further passes are necessary.
    {
        for (int j = 0; j < n - i - 1; j++) 
        // The inner loop iterates through the unsorted portion of the array, which decreases with each pass of the outer loop. The condition n-i-1 ensures that we do not compare elements that have already been sorted in previous passes. In each iteration of this inner loop, we compare adjacent elements and swap them if they are in the wrong order (i.e., if the current element is greater than the next element). This process continues until the largest unsorted element has been moved to its correct position at the end of the array.
        {
            if (arr[j] > arr[j + 1])
            // If the current element is greater than the next element, we need to swap them to sort the array in ascending order
            {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];// Store the current element in a temporary variable
                arr[j] = arr[j + 1];// Move the next element to the current position    
                arr[j + 1] = temp;// Move the current element (stored in temp) to the next position, completing the swap
            }
        }
    }

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " "; // Access and print each element of the sorted array
    }
    std::cout << std::endl;
    //logic of bubble sort explained: The bubble sort algorithm works by repeatedly stepping through the list to be sorted, comparing adjacent elements and swapping them if they are in the wrong order. This process is repeated until no swaps are needed, indicating that the list is sorted. The algorithm gets its name because smaller elements "bubble" to the top of the list (beginning of the array) while larger elements sink to the bottom (end of the array). The time complexity of bubble sort is O(n^2) in the average and worst cases, making it inefficient on large lists, but it is simple to understand and implement.
    // The outer loop runs n-1 times, where n is the number of elements in the array. Each iteration of the outer loop represents a pass through the array. The inner loop compares adjacent elements and swaps them if they are in the wrong order. After each pass, the largest unsorted element is moved to its correct position at the end of the array. This process continues until the entire array is sorted.
    // The time complexity of bubble sort is O(n^2) in the average and worst cases, making it inefficient on large lists. However, it is simple to understand and implement, which makes it a good choice for small datasets or educational purposes. The space complexity is O(1) because it only requires a constant amount of additional memory space for the temporary variable used during swapping.
    // In summary, bubble sort is a straightforward sorting algorithm that repeatedly compares and swaps adjacent elements to sort an array. While it is not the most efficient sorting method for large datasets, its simplicity makes it a useful educational tool for understanding basic sorting concepts.
    // The algorithm can be optimized by adding a flag to check if any swaps were made during a pass. If no swaps were made, the array is already sorted, and we can terminate early, reducing the number of passes needed.
    // Overall, bubble sort is a simple and intuitive sorting algorithm that is easy to implement and understand, but it is not suitable for large datasets due to its O(n^2) time complexity.

    return 0;
}