#include<iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    Point operator+(const Point& other) const {
        int newX = x + other.x;
        int newY = y + other.y;
        return Point(newX, newY);
    }

    void display() const {
        cout << "x = " << x << ", y = " << y <<endl;
    }
};

int main() {
    Point p1(5, 10);
    Point p2(3, 7);

    Point p3 = p1 + p2;

    cout << "p1: ";
    p1.display();
    
    cout << "p2: ";
    p2.display();
    
    cout << "p3: ";
    p3.display();

    return 0;
}
