// ============================================================
// ACTIVITY 4: GEOMETRY FUNCTION LIBRARY
// Modular design with geometry calculations
// ============================================================

#include <iostream>
#include <cmath> // Include cmath for M_PI / pow operations
using namespace std;

// Constant definition for Pi (used if M_PI is unavailable)
const double PI = 3.141592653589793;

// ------------------------------------------------------------
// GEOMETRY LIBRARY FUNCTIONS
// ------------------------------------------------------------

// Function to calculate area of a circle: Area = π * r^2
double areaCircle(double radius) {
    if (radius < 0) return 0; // Guard clause against invalid input
    return PI * radius * radius;
}

// Function to calculate area of a rectangle: Area = length * width
double areaRectangle(double length, double width) {
    if (length < 0 || width < 0) return 0; // Guard clause
    return length * width;
}

// Function to calculate area of a triangle: Area = 0.5 * base * height
double areaTriangle(double base, double height) {
    if (base < 0 || height < 0) return 0; // Guard clause
    return 0.5 * base * height;
}

// ------------------------------------------------------------
// MAIN PROGRAM
// ------------------------------------------------------------
int main() {
    int choice = 0;

    cout << "========================================" << endl;
    cout << "       GEOMETRY CALCULATOR LIBRARY      " << endl;
    cout << "========================================" << endl;
    cout << "1. Calculate Circle Area" << endl;
    cout << "2. Calculate Rectangle Area" << endl;
    cout << "3. Calculate Triangle Area" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double r;
            cout << "Enter circle radius: ";
            cin >> r;
            cout << "Circle Area = " << areaCircle(r) << endl;
            break;
        }
        case 2: {
            double l, w;
            cout << "Enter rectangle length and width: ";
            cin >> l >> w;
            cout << "Rectangle Area = " << areaRectangle(l, w) << endl;
            break;
        }
        case 3: {
            double b, h;
            cout << "Enter triangle base and height: ";
            cin >> b >> h;
            cout << "Triangle Area = " << areaTriangle(b, h) << endl;
            break;
        }
        default:
            cout << "Invalid selection!" << endl;
            break;
    }

    return 0;
}