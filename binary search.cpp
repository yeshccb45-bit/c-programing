//binary search in an array
#include <iostream>

int main() {
    int sortedArr[] = {10, 20, 30, 40, 50};
    int n = sizeof(sortedArr) / sizeof(sortedArr[0]);
    int target;
    std::cout << "Enter the element to search for in the sorted array: ";
    std::cin >> target;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (sortedArr[mid] == target) {
            std::cout << "Element found at index " << mid << std::endl;
            found = true;
            break;
        } else if (sortedArr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
