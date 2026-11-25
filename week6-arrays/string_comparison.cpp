// ============================================================
// ACTIVITY 3: C-STRINGS VS. STD::STRING
// Learning Outcome: Evaluate advantages/disadvantages of C-strings vs std::string
// ============================================================

#include <iostream>
#include <cstring> // Required for C-string functions like strlen, strcpy, strcmp
#include <string>  // Required for C++ std::string class
using namespace std;

int main() {
    // ------------------------------------------------------------
    // PART 1: C-STRINGS (Null-terminated char arrays)
    // ------------------------------------------------------------
    cout << "=== 1. C-STRING OPERATIONS ===" << endl;

    // Declare and initialize C-strings
    char cstr1[20] = "Hello";
    char cstr2[] = "World";

    // Measure length using strlen (excludes null terminator '\0')
    cout << "cstr1 length (strlen): " << strlen(cstr1) << endl;

    // Concatenate cstr2 into cstr1 (must ensure destination array size is large enough)
    strcat(cstr1, " ");
    strcat(cstr1, cstr2);
    cout << "After concatenation (strcat): " << cstr1 << endl;

    // Compare C-strings using strcmp (returns 0 if equal)
    if (strcmp(cstr2, "World") == 0) {
        cout << "cstr2 matches \"World\"" << endl;
    }
    cout << endl;

    // ------------------------------------------------------------
    // PART 2: C++ std::string CLASS
    // ------------------------------------------------------------
    cout << "=== 2. STD::STRING OPERATIONS ===" << endl;

    // Declare and initialize std::string objects
    string str1 = "Hello";
    string str2 = "World";

    // Measure length using .length() or .size() member functions
    cout << "str1 length (.length()): " << str1.length() << endl;

    // Concatenate using intuitive '+' or '+=' operators
    string str3 = str1 + " " + str2;
    cout << "After concatenation (+ operator): " << str3 << endl;

    // Compare strings directly using standard '==' comparison operator
    if (str2 == "World") {
        cout << "str2 matches \"World\"" << endl;
    }

    return 0;
}
