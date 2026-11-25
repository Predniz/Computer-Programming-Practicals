// ============================================================
// ACTIVITY 3: INPUT VALIDATION WITH DO-WHILE LOOP
// Learning Outcome: Evaluate suitability of while vs. do-while
// ============================================================

// Include input/output library
#include <iostream>

// Use standard namespace
using namespace std;

// Main entry point
int main() {
    // Variable to store user's entered number
    int number;

    // A do-while loop ensures the code block executes AT LEAST ONCE
    // before checking the condition at the end
    do {
        // Prompt the user for input within range [1, 10]
        cout << "Enter a number between 1 and 10: ";
        cin >> number;

        // Check if the entry is out of bounds and print warning
        if (number < 1 || number > 10) {
            cout << "Invalid entry! Please try again." << endl;
        }

    // Loop continues as long as the input remains invalid (less than 1 OR greater than 10)
    } while (number < 1 || number > 10);

    // Confirmation message printed once valid input is entered
    cout << "Success! You entered a valid number: " << number << endl;

    // Exit successfully
    return 0;
}