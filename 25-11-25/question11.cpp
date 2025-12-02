// 10. The Coordinate Quadrant Finder
// Write a program that accepts X and Y coordinates for a point. Determine where the point lies:
//  Quadrant 1: (+X, +Y)
//  Quadrant 2: (-X, +Y)
//  Quadrant 3: (-X, -Y)
//  Quadrant 4: (+X, -Y)
//  Origin: (0, 0)
//  On X-Axis: (X, 0)
//  On Y-Axis: (0, Y)

#include <iostream>
using namespace std;

int main() {
    double x, y;

    // Accept X and Y coordinates from the user
    cout << "Enter the X coordinate: ";
    cin >> x;
    cout << "Enter the Y coordinate: ";
    cin >> y;

    // Determine the location of the point
    if (x > 0 && y > 0) {
        cout << "The point is in Quadrant 1." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point is in Quadrant 2." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point is in Quadrant 3." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point is in Quadrant 4." << endl;
    } else if (x == 0 && y == 0) {
        cout << "The point is at the Origin." << endl;
    } else if (x == 0) {
        cout << "The point is on the Y-Axis." << endl;
    } else if (y == 0) {
        cout << "The point is on the X-Axis." << endl;
    }

    return 0;
}