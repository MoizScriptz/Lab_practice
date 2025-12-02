// 1. The Three Number Showdown Write a C++ program that accepts three distinct integers from the user. The program should identify and display the largest and the smallest of the three numbers using only if-else statements and logical operators.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Accept three distinct integers from the user
    cout << "Enter three distinct integers: ";
    cin >> num1 >> num2 >> num3;

    int largest, smallest;

    // Determine the largest number
    if (num1 > num2 && num1 > num3) {
        largest = num1;
    } else if (num2 > num1 && num2 > num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Determine the smallest number
    if (num1 < num2 && num1 < num3) {
        smallest = num1;
    } else if (num2 < num1 && num2 < num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    // Display the results
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}