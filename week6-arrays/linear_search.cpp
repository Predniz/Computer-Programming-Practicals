// ============================================================
// ACTIVITY 1: LINEAR SEARCH IN AN INTEGER ARRAY
// Learning Outcome: Apply linear search to find an element in an array
// ============================================================

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// FUNCTION: linearSearch
// Purpose: Search for a target value in an array
// Parameters: arr (the array), size (number of elements), target (value to find)
// Returns: index of the target if found, -1 if not found
// ------------------------------------------------------------
int linearSearch(int arr[], int size, int target) {
    // Loop through each element in the array
    for (int i = 0; i < size; i++) {
        // Compare the current element with the target
        if (arr[i] == target) {
            // If a match is found, return the index immediately
            return i;
        }
    }
    // If the loop finishes without finding the target, return -1
    return -1;
}

int main() {
    // Declare and initialize an array of 8 integers
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};
    
    // Calculate the total number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int target;

    // Display the array contents to the user
    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Prompt user for input
    cout << "Enter a number to search for: ";
    cin >> target;

    // Call linearSearch function
    int result = linearSearch(numbers, size, target);

    // Output the result of the search
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << target << " was not found in the array." << endl;
    }

    return 0;
}