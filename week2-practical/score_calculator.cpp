
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // ============================================================
    // VARIABLE DECLARATIONS
    // Each variable is a storage box with a specific data type.
    // ============================================================

    string studentName; // Stores the student's name
    string course;      // Stores the course (BBIT/BCS)

    int score1, score2, score3; // Whole numbers - test scores
    int totalScore;             // Sum of scores

    double average;    // Decimal number - average score
    double percentage; // Decimal number - percentage

    // ============================================================
    // CONSTANT DECLARATION
    // A constant cannot be changed during program execution.
    // ============================================================

    const int MAX_SCORE = 100;

    // ============================================================
    // WELCOME BANNER
    // ============================================================

    cout << "========================================" << endl;
    cout << "       STUDENT SCORE CALCULATOR" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // ============================================================
    // QUESTION 1: STUDENT NAME
    // ============================================================

    cout << "Enter student name: ";
    getline(cin, studentName);

    // ============================================================
    // QUESTION 2: COURSE
    // ============================================================

    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);

    // ============================================================
    // QUESTION 3: TEST SCORES
    // ============================================================

    cout << "Enter score for Test 1: ";
    cin >> score1;

    cout << "Enter score for Test 2: ";
    cin >> score2;

    cout << "Enter score for Test 3: ";
    cin >> score3;

    // ============================================================
    // CALCULATION 1: TOTAL SCORE
    // ============================================================

    totalScore = score1 + score2 + score3;

    // ============================================================
    // CALCULATION 2: AVERAGE
    // Use 3.0 to get decimal division.
    // ============================================================

    average = totalScore / 3.0;

    // ============================================================
    // CALCULATION 3: PERCENTAGE
    // Maximum possible score = 3 tests x 100 = 300
    // ============================================================

    percentage = (totalScore / 300.0) * 100;

    // ============================================================
    // DISPLAY REPORT CARD
    // ============================================================

    cout << endl;
    cout << "========================================" << endl;
    cout << "              REPORT CARD" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Student: " << studentName << endl;
    cout << "Course: " << course << endl;
    cout << endl;

    cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
    cout << endl;

    cout << "Total: " << totalScore << "/300" << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << endl;

    // ============================================================
    // DETERMINE PASS OR FAIL
    // ============================================================

    if (percentage >= 50)
    {
        cout << "Result: PASS" << endl;
    }
    else
    {
        cout << "Result: FAIL" << endl;
    }

    cout << "========================================" << endl;

    return 0;
}

