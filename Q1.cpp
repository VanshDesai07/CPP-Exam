#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle(double l = 0, double w = 0) {
        length = l;
        width = w;
    }

    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Length must be positive." << endl;
        }
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Width must be positive." << endl;
        }
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    rect.setLength(5);
    rect.setWidth(3);

    cout << "Length: " << rect.getLength() << " units" << endl;
    cout << "Width: " << rect.getWidth() << " units" << endl;

    double area = rect.calculateArea();
    cout << "Area of the rectangle: " << area << " square units" << endl;

    return 0;
}