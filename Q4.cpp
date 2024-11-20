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

    virtual void display() const = 0;  
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

        setArea(M_PI * radius * radius);
    }

    double getRadius() const {
        return radius;
    }

    void display() const override {
        cout << "Shape: Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << " units" << endl;
        cout << "Area: " << getArea() << " square units" << endl;
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

    void display() const override {
        cout << "Shape: Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << " units" << endl;
        cout << "Width: " << width << " units" << endl;
        cout << "Area: " << getArea() << " square units" << endl;
    }
};

int main() {

    Shape* shapes[2];

    shapes[0] = new Circle(5, "Red");
    shapes[1] = new Rectangle(4, 6, "Blue");

    for (int i = 0; i < 2; ++i) {

        shapes[i]->calculateArea();

        shapes[i]->display();
        cout << endl;
    }

    delete shapes[0];
    delete shapes[1];

    return 0;
}