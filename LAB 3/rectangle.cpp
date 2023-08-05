#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float len) {
        length = len;
    }

    void setWidth(float wid) {
        width = wid;
    }

    float getArea() {
        return length * width;
    }

    float getPerimeter() {
        return 2 * (length + width);
    }

    void displayDetails() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle rect1, rect2;
    float length, width;

    cout << "Enter the dimensions of Rectangle 1:\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    rect1.setLength(length);
    rect1.setWidth(width);

    cout << "\nEnter the dimensions of Rectangle 2:\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    rect2.setLength(length);
    rect2.setWidth(width);

    cout << "\nDetails of Rectangle 1:\n";
    rect1.displayDetails();

    cout << "\nDetails of Rectangle 2:\n";
    rect2.displayDetails();

    return 0;
}
