#include <iostream>
#include <cmath>  // For M_PI constant
using namespace std;

class Shape {
private:
    string color;
    double area;

public:

    Shape(string c = "white") : color(c), area(0) {}

    void setColor(string c) {
        color = c;
    }

    string getColor() const {
        return color;
    }

    virtual void calculateArea() = 0;  

    double getArea() const {
        return area;
    }

protected:
   
    void setArea(double a) {
        area = a;
    }
};

class Circle : public Shape {
private:
    double radius;

public:

    Circle(double r, string c = "white") : Shape(c), radius(r) {}

    void calculateArea() override {
        // Area of a circle = π * r^2
        setArea(M_PI * radius * radius);
    }

    double getRadius() const {
        return radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:

    Rectangle(double l, double w, string c = "white") : Shape(c), length(l), width(w) {}


    void calculateArea() override {

        setArea(length * width);
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }
};

int main() {

    Circle circle(5, "Red");
    circle.calculateArea();
    cout << "Circle Color: " << circle.getColor() << endl;
    cout << "Circle Radius: " << circle.getRadius() << " units" << endl;
    cout << "Circle Area: " << circle.getArea() << " square units" << endl;

    cout << endl;

    Rectangle rectangle(4, 6, "Blue");
    rectangle.calculateArea();
    cout << "Rectangle Color: " << rectangle.getColor() << endl;
    cout << "Rectangle Length: " << rectangle.getLength() << " units" << endl;
    cout << "Rectangle Width: " << rectangle.getWidth() << " units" << endl;
    cout << "Rectangle Area: " << rectangle.getArea() << " square units" << endl;

    return 0;
}