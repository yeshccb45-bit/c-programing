//linear search in an array
#include <iostream> 

int main() {
    // Implementation for linear search
    int arr[] = {10, 20, 30, 40, 50}; // Declare and initialize an array of integers
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements  
    int target; // Element to search for
    std::cout << "Enter the element to search for: ";
    std::cin >> target;
    bool found = false; // Flag to indicate if the element is found
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            std::cout << "Element found at index " << i << std::endl;
            found = true; // Set the flag to true if the element is found


            break;
        }
    }
    if (!found) {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
