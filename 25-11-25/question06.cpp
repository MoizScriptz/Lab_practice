// 6. Login Access Control Hardcode a specific username (e.g., "admin") and a password (e.g., "12345"). Ask the user to input their credentials.
//  If both match, print "Access Granted".
//  If the username is correct but the password is wrong, print "Incorrect Password".
//  Otherwise, print "User not found".

#include <iostream>
#include <string>   
using namespace std;

int main() {
    string correctUsername = "admin";
    string correctPassword = "12345";
    string inputUsername, inputPassword;

    // Accept username and password from the user
    cout << "Enter username: ";
    cin >> inputUsername;
    cout << "Enter password: ";
    cin >> inputPassword;

    // Check the credentials and print the appropriate message
    if (inputUsername == correctUsername) {
        if (inputPassword == correctPassword) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect Password" << endl;
        }
    } else {
        cout << "User not found" << endl;
    }

    return 0;
}