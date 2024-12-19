// Function Overloading for Calculating Area.
#include <iostream>
#include <cmath>
using namespace std;

class Area {
public:
    double area(double radius) {
        return M_PI * radius * radius;
    }

    double area(double length, double width) {
        return length * width;
    }

    double area(double base, double height, bool isTriangle) {
        if (isTriangle) {
            return 0.5 * base * height;
        }
        return 0; // Default return if not a triangle
    }
};

int main() {
    Area a;
    double radius, length, width, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << a.area(radius) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << a.area(length, width) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << a.area(base, height, true) << endl;

    return 0;
}
