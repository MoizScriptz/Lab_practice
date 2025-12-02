// The Firewall Rule Filter
//  Scenario: You are building a packet filter for a firewall. You have an array of 500 integer
// IP ID headers. You must iterate through them to find malicious IDs.
//  Requirements:
// o Iterate through the IDs using a for loop.
// o If an ID matches the specific malicious signature 0x99, print "Threat Detected:
// 0x99" and immediately terminate the loop using break.
// o If the ID is even, it is considered "Trusted". If it is odd, it is "Suspicious" but
// allowed. Print the status for each.
//  Goal: Efficiently halt processing upon detection of a threat.

#include <iostream>
using namespace std;
int main() {
    const int size = 500;
    int ipIds[size];

    // Simulating the array with some values, including the malicious ID
    for (int i = 0; i < size; ++i) {
        ipIds[i] = i % 256; // Example values, can be replaced with actual IP IDs
    }

    for (int i = 0; i < size; ++i) {
        if (ipIds[i] == 0x99) {
            cout << "Threat Detected: 0x99" << endl;
            break; // Terminate loop upon detecting the threat
        }

        if (ipIds[i] % 2 == 0) {
            cout << "ID: " << ipIds[i] << " is Trusted." << endl;
        } else {
            cout << "ID: " << ipIds[i] << " is Suspicious but allowed." << endl;
        }
    }

    return 0;
}