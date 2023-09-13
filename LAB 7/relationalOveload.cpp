//WAP for Overloading relational operator(>)
#include<iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    bool operator>(const Point& other) const {
        int thisMagnitudeSquared = x * x + y * y;

        int otherMagnitudeSquared = other.x * other.x + other.y * other.y;

        return thisMagnitudeSquared > otherMagnitudeSquared;
    }

    void display() const {
    cout << "x = " << x << ", y = " << y <<endl;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(1, 5);

    if (p1 > p2) {
        cout << "p1 is greater than p2" <<endl;
    } else {
      cout << "p1 is not greater than p2" <<endl;
    }

    return 0;
}
