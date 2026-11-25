// ============================================================
// ACTIVITY 2: VARIABLE SCOPE - GLOBAL VS. LOCAL
// Analyzing variable accessibility, lifespan, and shadowing
// ============================================================

#include <iostream>
using namespace std;

// Global variable: declared outside functions, accessible everywhere
int globalCounter = 100;

// Function displaying the shared global variable
void displayGlobal() {
    // Accesses globalCounter directly
    cout << "Inside displayGlobal: globalCounter = " << globalCounter << endl;
    // Note: Attempting to access 'localCounter' here would cause a compile error
}

// Function modifying the shared global variable
void modifyGlobal() {
    // Changes the global variable value directly
    globalCounter = 500;
    cout << "Inside modifyGlobal: globalCounter changed to " << globalCounter << endl;
}

// Function demonstrating variable shadowing
void localDemo() {
    // Local variable with the exact same name as the global variable
    int globalCounter = 999; // Shadowing occurs here: local hides global
    
    cout << "Inside localDemo: globalCounter (local shadow) = " << globalCounter << endl;
    cout << "Inside localDemo: ::globalCounter (explicit global) = " << ::globalCounter << endl;
}

int main() {
    // Local variable confined to main()
    int localCounter = 50;

    cout << "In main: globalCounter = " << globalCounter << endl;
    cout << "In main: localCounter = " << localCounter << endl;

    // Call displayGlobal (reads global variable = 100)
    displayGlobal();

    // Call modifyGlobal (changes global variable to 500)
    modifyGlobal();

    // Verify global change reflected back in main
    cout << "In main (after modifyGlobal): globalCounter = " << globalCounter << endl;

    // Call localDemo (local variable shadows global variable)
    localDemo();

    // Verify global value remains intact despite local variable shadowing
    cout << "In main (after localDemo): globalCounter = " << globalCounter << endl;

    return 0;
}