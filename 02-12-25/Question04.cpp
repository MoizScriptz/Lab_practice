//  Sensor Data Outlier Rejection
//  Scenario: An IoT temperature sensor array provides 10 readings. The valid range for the
// machinery is -10°C to 110°C.
//  Requirements:
// o Store 10 readings in an array (some valid, some invalid).
// o Loop through the readings.
// o Use if-else to categorize readings:
//  If the value is outside the range (-10 to 110), print "Error: Sensor
// Malfunction" and break processing immediately to prevent bad data from
// entering the database.
//  Otherwise, print "Log: [Value] OK".
//  Goal: Data integrity enforcement.

#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int sensorReadings[size] = {25, 30, -15, 45, 110, 115, 60, 75, 90, 100}; // Sample readings

    for (int i = 0; i < size; ++i) {
        if (sensorReadings[i] < -10 || sensorReadings[i] > 110) {
            cout << "Error: Sensor Malfunction" << endl;
            break; // Stop processing on invalid reading
        } else {
            cout << "Log: " << sensorReadings[i] << " OK" << endl;
        }
    }

    return 0;
}