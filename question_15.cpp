// Polymorphism with Shape Area Calculation
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0; 
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double calculateArea() override {
        return length * breadth;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    double radius, length, breadth, base, height;

    cout << "Enter radius for circle: ";
    cin >> radius;
    Circle circle(radius);

    cout << "Enter length and breadth for rectangle: ";
    cin >> length >> breadth;
    Rectangle rectangle(length, breadth);

    cout << "Enter base and height for triangle: ";
    cin >> base >> height;
    Triangle triangle(base, height);

    cout << "\nArea of Circle: " << circle.calculateArea() << endl;
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;
    cout << "Area of Triangle: " << triangle.calculateArea() << endl;

    return 0;
}
