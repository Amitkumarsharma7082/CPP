#include <iostream>
#include <cmath>

using namespace std;

double areaOfCircle(double r) {
    if (r < 0) {
        cout << "Radius cannot be negative." << endl;
        return -1;
    }
    return M_PI * r * r; // Using M_PI from cmath for π
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = areaOfCircle(radius);
    if (area >= 0) {
        cout << "The area of the circle with radius " << radius << " is " << area << endl;
    }

    return 0;
}
