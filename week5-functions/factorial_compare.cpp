// ============================================================
// ACTIVITY 3: RECURSIVE VS. ITERATIVE FACTORIAL
// Comparing execution approach, memory overhead, and efficiency
// ============================================================

#include <iostream>
using namespace std;

// Recursive Factorial
// Formula: n! = n * (n - 1)!
// Pros: Elegant and simple syntax
// Cons: High stack space usage for deep calls, slower call overhead
long long factorialRecursive(int n) {
    // Base Case: stop recursion when n is 0 or 1
    if (n <= 1) {
        return 1;
    }
    // Recursive Case: function calls itself with (n - 1)
    return n * factorialRecursive(n - 1);
}

// Iterative Factorial
// Formula: n! = 1 * 2 * 3 * ... * n
// Pros: O(1) memory footprint, no call stack overhead, fast
// Cons: Requires explicit loop structures
long long factorialIterative(int n) {
    long long result = 1;
    // Multiply sequence iteratively from 1 up to n
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number = 5;

    cout << "--- Factorial Evaluation for n = " << number << " ---" << endl;
    
    // Calculate via recursion
    long long recResult = factorialRecursive(number);
    cout << "Recursive Result: " << number << "! = " << recResult << endl;

    // Calculate via iteration
    long long iterResult = factorialIterative(number);
    cout << "Iterative Result: " << number << "! = " << iterResult << endl;

    return 0;
}