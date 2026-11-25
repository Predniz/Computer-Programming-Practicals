// ============================================================
// ACTIVITY 2: BREAK AND CONTINUE IN LOOPS
// Learning Outcome: Analyse break and continue statements
// ============================================================

// Include the input/output library
#include <iostream>

// Use the standard namespace
using namespace std;

// The main function - where the program starts
int main() {
    // Display header message
    cout << "Starting loop from 1 to 20..." << endl;
    cout << "Rules: Skip multiples of 3, stop entirely at 15." << endl;
    cout << "--------------------------------------------" << endl;

    // For loop running from 1 to 20
    for (int i = 1; i <= 20; i++) {
        // Check if i is 15 -> Break the loop completely
        if (i == 15) {
            cout << "Reached 15! Stopping loop (break)." << endl;
            break; // Exits the loop immediately
        }

        // Check if i is a multiple of 3 -> Skip this iteration
        if (i % 3 == 0) {
            cout << "Skipping " << i << " (multiple of 3 - continue)" << endl;
            continue; // Jump directly to the next iteration (i++)
        }

        // Print the current number if it passed both checks
        cout << "Number: " << i << endl;
    } // End of loop

    // Return 0 to signal successful execution
    return 0;
}
