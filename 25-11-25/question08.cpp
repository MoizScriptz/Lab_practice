// 7. The Leap Year Calculator Write a program that asks for a year (e.g., 2024). Determine if it is a Leap Year based on these rules:
//  The year must be divisible by 4.
//  HOWEVER, if the year is divisible by 100, it is NOT a leap year, UNLESS it is also divisible by 400.
//  Example: 2000 is a leap year, 1900 is not.

#include <iostream>
using namespace std;

int main() {
    int year;

    // Accept a year from the user
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a Leap Year." << endl;
            } else {
                cout << year << " is not a Leap Year." << endl;
            }
        } else {
            cout << year << " is a Leap Year." << endl;
        }
    } else {
        cout << year << " is not a Leap Year." << endl;
    }

    return 0;
}