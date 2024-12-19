// Implementing Polymorphism for Shape Hierarchies
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0; // Pure virtual function
    virtual void displayArea() {
        cout << "Area of Shape: " << calculateArea() << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }

    void displayArea() override {
        cout << "Area of Circle: " << calculateArea() << endl;
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

    void displayArea() override {
        cout << "Area of Rectangle: " << calculateArea() << endl;
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

    void displayArea() override {
        cout << "Area of Triangle: " << calculateArea() << endl;
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

    Shape* shapes[3];
    shapes[0] = &circle;
    shapes[1] = &rectangle;
    shapes[2] = &triangle;

    for (int i = 0; i < 3; i++) {
        shapes[i]->displayArea();
    }

    return 0;
}
