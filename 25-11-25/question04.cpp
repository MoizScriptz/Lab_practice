// 4. The Triangle Validity Checker Ask the user to input three angles of a triangle. Write a program to determine if the triangle is valid or not.
//  Hint: A triangle is valid if the sum of all three angles is exactly 180 AND no angle is zero or negative.

#include <iostream> 
using namespace std;

int main() {
    int angle1, angle2, angle3;

    // Accept three angles from the user
    cout << "Enter three angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    // Check if the triangle is valid
    if ((angle1 + angle2 + angle3 == 180) && (angle1 > 0) && (angle2 > 0) && (angle3 > 0)) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}