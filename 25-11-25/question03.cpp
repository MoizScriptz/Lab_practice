// 3. Even or Odd (but specialized) Write a program that takes an integer input.
//  If the number is even and positive, print "Positive Even".
//  If the number is odd and positive, print "Positive Odd".
//  If the number is negative, print "Negative Number".
//  If the number is zero, print "Zero".

#include <iostream>
using namespace std;

int main() {
    int number;

    // Accept an integer from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Check the conditions and print the appropriate message
    if (number > 0) {
        if (number % 2 == 0) {
            cout << "Positive Even" << endl;
        } else {
            cout << "Positive Odd" << endl;
        }
    } else if (number < 0) {
        cout << "Negative Number" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}