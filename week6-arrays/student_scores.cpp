// ============================================================
// ACTIVITY 4: STUDENT SCORES ANALYZER
// Learning Outcome: Calculate average score and display scores above average
// ============================================================

#include <iostream>
using namespace std;

int main() {
    const int NUM_STUDENTS = 10;
    double scores[NUM_STUDENTS];
    double sum = 0.0;
    double average = 0.0;

    cout << "========================================" << endl;
    cout << "       STUDENT SCORES ANALYZER         " << endl;
    cout << "========================================" << endl;

    // 1. Input loop: read 10 scores and calculate running total
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter score for student " << (i + 1) << ": ";
        cin >> scores[i];
        
        // Input validation: ensure non-negative score entry
        while (scores[i] < 0) {
            cout << "Invalid score! Please enter a non-negative score: ";
            cin >> scores[i];
        }
        
        sum += scores[i]; // Add current score to cumulative sum
    }

    // 2. Calculate average score
    average = sum / NUM_STUDENTS;

    // 3. Display summary results
    cout << "\n----------------------------------------" << endl;
    cout << "Total Sum of Scores: " << sum << endl;
    cout << "Average Score:      " << average << endl;
    cout << "----------------------------------------" << endl;

    // 4. Output scores higher than the calculated average
    cout << "Scores Above Average (" << average << "):" << endl;
    int aboveCount = 0;
    
    for (int i = 0; i < NUM_STUDENTS; i++) {
        if (scores[i] > average) {
            cout << "  Student " << (i + 1) << ": " << scores[i] << endl;
            aboveCount++;
        }
    }

    cout << "Total students above average: " << aboveCount << " out of " << NUM_STUDENTS << endl;

    return 0;
}