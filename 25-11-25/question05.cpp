// 5. Academic Grading System Write a program that takes a student's percentage (0-100) and outputs their Grade based on the following criteria:
//  90 and above: Grade A
//  80 to 89: Grade B
//  70 to 79: Grade C
//  60 to 69: Grade D
//  Below 60: Fail
//  Invalid Input: If the user enters < 0 or > 100, print an error message.

#include <iostream>
using namespace std;

int main() {
    int percentage;

    // Accept the student's percentage from the user
    cout << "Enter the student's percentage (0-100): ";
    cin >> percentage;

    // Determine and display the grade based on the percentage
    if (percentage >= 90 && percentage <= 100) {
        cout << "Grade A" << endl;
    } else if (percentage >= 80 && percentage < 90) {
        cout << "Grade B" << endl;
    } else if (percentage >= 70 && percentage < 80) {
        cout << "Grade C" << endl;
    } else if (percentage >= 60 && percentage < 70) {
        cout << "Grade D" << endl;
    } else if (percentage >= 0 && percentage < 60) {
        cout << "Fail" << endl;
    } else {
        cout << "Invalid Input. Please enter a percentage between 0 and 100." << endl;
    }

    return 0;
}