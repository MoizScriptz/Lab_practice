// 8. E-Commerce Discount System A store offers discounts based on the total purchase amount and membership status. Ask the user for their Total Amount and if they are a Member (Yes/No).
//  Member + Amount > $100: 20% Discount.
//  Member + Amount <= $100: 10% Discount.
//  Non-Member + Amount > $100: 5% Discount.
//  Non-Member + Amount <= $100: No Discount.
//  Output the final payable amount.

#include <iostream>
#include <string>
using namespace std;    
int main() {
    double totalAmount;
    string isMember;

    // Accept total amount and membership status from the user
    cout << "Enter the total purchase amount: $";
    cin >> totalAmount;
    cout << "Are you a member? (Yes/No): ";
    cin >> isMember;

    double discount = 0.0;

    // Determine the discount based on membership status and total amount
    if (isMember == "Yes" || isMember == "yes") {
        if (totalAmount > 100) {
            discount = 0.20; // 20% discount
        } else {
            discount = 0.10; // 10% discount
        }
    } else if (isMember == "No" || isMember == "no") {
        if (totalAmount > 100) {
            discount = 0.05; // 5% discount
        } else {
            discount = 0.0; // No discount
        }
    } else {
        cout << "Invalid membership status input." << endl;
        return 1; // Exit with error
    }

    // Calculate final payable amount
    double finalAmount = totalAmount - (totalAmount * discount);

    // Display the final payable amount
    cout << "Final payable amount: $" << finalAmount << endl;

    return 0;
}