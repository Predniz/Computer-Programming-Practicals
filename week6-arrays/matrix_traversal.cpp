// ============================================================
// ACTIVITY 2: 2D ARRAY MEMORY LAYOUT AND TRAVERSAL
// Learning Outcome: Analyze row-major order memory layout and traversal
// ============================================================

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

// Function to traverse row-by-row (Row-Major order)
void printRowMajor(int matrix[ROWS][COLS]) {
    cout << "--- Row-Major Order (Row by Row) ---" << endl;
    // Outer loop moves through each row
    for (int r = 0; r < ROWS; r++) {
        // Inner loop moves through each column in current row
        for (int c = 0; c < COLS; c++) {
            cout << matrix[r][c] << "\t";
        }
        cout << endl; // Move to next line after completing a row
    }
}

// Function to traverse column-by-column (Column-Major order)
void printColumnMajor(int matrix[ROWS][COLS]) {
    cout << "--- Column-Major Order (Column by Column) ---" << endl;
    // Outer loop moves through each column
    for (int c = 0; c < COLS; c++) {
        // Inner loop moves through each row in current column
        for (int r = 0; r < ROWS; r++) {
            cout << matrix[r][c] << "\t";
        }
        cout << endl;
    }
}

int main() {
    // Initialize a 3x4 2D matrix
    int matrix[ROWS][COLS] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    // Print memory addresses to demonstrate row-major layout in memory
    cout << "--- Memory Layout Addresses ---" << endl;
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << "matrix[" << r << "][" << c << "] Address: " << &matrix[r][c] << endl;
        }
    }
    cout << endl;

    // Traverse and display matrix using both traversal approaches
    printRowMajor(matrix);
    cout << endl;
    printColumnMajor(matrix);

    return 0;
}