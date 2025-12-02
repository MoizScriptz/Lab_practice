// 9. Steel Quality Grade A certain grade of steel is graded according to the following conditions:
// 1. Hardness must be greater than 50.
// 2. Carbon content must be less than 0.7.
// 3. Tensile strength must be greater than 5600.
//  Grade 10: If all three conditions are met.
//  Grade 9: If conditions (1) and (2) are met.
//  Grade 8: If conditions (2) and (3) are met.
//  Grade 7: If conditions (1) and (3) are met.
//  Grade 6: If only one condition is met.
//  Grade 5: If none of the conditions are met.

#include <iostream>
using namespace std;

int main() {
    double hardness, carbonContent, tensileStrength;

    // Accept the properties of the steel from the user
    cout << "Enter the hardness of the steel: ";
    cin >> hardness;
    cout << "Enter the carbon content of the steel: ";
    cin >> carbonContent;
    cout << "Enter the tensile strength of the steel: ";
    cin >> tensileStrength;

    // Check the conditions
    bool condition1 = (hardness > 50);
    bool condition2 = (carbonContent < 0.7);
    bool condition3 = (tensileStrength > 5600);

    int conditionsMet = condition1 + condition2 + condition3;

    // Determine and display the grade based on the conditions met
    if (conditionsMet == 3) {
        cout << "Grade 10" << endl;
    } else if (conditionsMet == 2) {
        if (condition1 && condition2) {
            cout << "Grade 9" << endl;
        } else if (condition2 && condition3) {
            cout << "Grade 8" << endl;
        } else if (condition1 && condition3) {
            cout << "Grade 7" << endl;
        }
    } else if (conditionsMet == 1) {
        cout << "Grade 6" << endl;
    } else {
        cout << "Grade 5" << endl;
    }

    return 0;
}