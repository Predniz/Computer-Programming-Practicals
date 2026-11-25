// ============================================================
// ACTIVITY 4: MULTIPLICATION TABLE GENERATOR
// Learning Outcome: Create nested loops for 2D structures
// ============================================================

// Include input/output library
#include <iostream>

// Use standard namespace
using namespace std;

// Main entry point
int main() {
    // Declare dimensions for the table grid
    int rows, cols;

    // Prompt user for rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Print table header
    cout << "\n--- Multiplication Table (" << rows << " x " << cols << ") ---\n" << endl;

    // Outer loop controls the rows (i goes from 1 to rows)
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop controls the columns (j goes from 1 to cols)
        for (int j = 1; j <= cols; j++) {
            // Multiply row index by column index and print tab-separated
            cout << i * j << "\t";
        } // End of inner loop (completes one row of values)

        // Print newline to move to the next row on screen
        cout << endl;
        
    } // End of outer loop

    // Exit successfully
    return 0;
}

