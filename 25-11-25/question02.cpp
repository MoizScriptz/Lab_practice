// 2. The Vowel Detector Create a program that asks the user to input a single character. Check if the character is a vowel (a, e, i, o, u) or a consonant.
//  Requirement: You must handle both uppercase and lowercase inputs (e.g., 'A' and 'a') using the OR (||) operator.


#include <iostream>
using namespace std;

int main() {
    char ch;

    // Accept a single character from the user
    cout << "Enter a single character: ";
    cin >> ch;

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}