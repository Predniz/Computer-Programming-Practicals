#include <iostream>
using namespace std;

int main() {
    double score;

    cout << "Enter student score (0 - 100): ";
    cin >> score;

    // Input Validation
    if (cin.fail() || score < 0 || score > 100) {
        cout << "Error: Invalid score entered. Score must be between 0 and 100." << endl;
        return 1;
    }

    // Grade Determination Logic
    char grade;
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Final Grade: " << grade << endl;

    return 0;
}

