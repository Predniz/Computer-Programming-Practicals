// ============================================================
// ACTIVITY 1: PASS-BY-VALUE - THE SWAP THAT DOESN'T SWAP
// Demonstrating pass-by-value vs. pass-by-reference in C++
// ============================================================

#include <iostream>
using namespace std;

// Function attempting to swap using pass-by-value (copies are made)
void swapByValue(int a, int b) {
    cout << "  Inside swapByValue - Before swap: a = " << a << ", b = " << b << endl;
    
    // Swap local copies inside the function scope
    int temp = a;
    a = b;
    b = temp;
    
    cout << "  Inside swapByValue - After swap:  a = " << a << ", b = " << b << endl;
    // Copies are destroyed when function returns; main's variables are unaffected
}

// Function successfully swapping using pass-by-reference (aliases original variables)
void swapByReference(int &a, int &b) {
    // The '&' symbol creates reference parameters that point directly to original memory locations
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "--- Testing Pass-by-Value ---" << endl;
    cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
    
    // Pass x and y by value (copies are created)
    swapByValue(x, y);
    
    cout << "After swapByValue:  x = " << x << ", y = " << y << endl;
    cout << "Notice: x and y in main did NOT swap because only copies were modified.\n" << endl;

    cout << "--- Testing Pass-by-Reference (Challenge Fix) ---" << endl;
    cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
    
    // Pass x and y by reference (modifies original variables)
    swapByReference(x, y);
    
    cout << "After swapByReference:  x = " << x << ", y = " << y << endl;
    cout << "Notice: x and y in main successfully swapped!" << endl;

    return 0;
}