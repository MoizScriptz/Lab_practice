// User Authentication Retry Logic
//  Scenario: A secure banking terminal allows a user 3 attempts to enter a correct PIN code
// (hardcode the correct PIN as 1234).
//  Requirements:
// o Use a for loop to represent the 3 attempts.
// o Use if-else to check if the input matches the stored PIN.
// o If the PIN is correct, print "Access Granted" and break out of the loop.
// o If the loop finishes without a correct PIN, print "Account Locked".
//  Goal: Implement standard secure login flow control.

#include <iostream>
using namespace std;

int main() {
    const int correctPin = 1234;
    int enteredPin;

    for (int attempt = 1; attempt <= 3; ++attempt) {
        cout << "Enter PIN (Attempt " << attempt << " of 3): ";
        cin >> enteredPin;

        if (enteredPin == correctPin) {
            cout << "Access Granted" << endl;
            break; // Exit loop on successful authentication
        } else {
            cout << "Incorrect PIN." << endl;
        }

        if (attempt == 3) {
            cout << "Account Locked" << endl; // Lock account after 3 failed attempts
        }
    }

    return 0;
}