#include <iostream>
using namespace std;

class Coordinate {
private:
    int x;
    int y;

public:
    void setCoordinates(int x_val, int y_val) {
        x = x_val;
        y = y_val;
    }

    Coordinate addCoordinates(Coordinate other) {
        Coordinate result;
        result.x = x + other.x;
        result.y = y + other.y;
        return result;
    }

    void displayCoordinates() {
        cout << "(x,y): (" << x << "," << y << ")" << endl;
    }
};

int main() {
    Coordinate coord1, coord2, sumCoord;
    int x1, y1, x2, y2;

    cout << "Enter the coordinates for Point 1 (X Y): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates for Point 2 (X Y): ";
    cin >> x2 >> y2;

    coord1.setCoordinates(x1, y1);
    coord2.setCoordinates(x2, y2);

    sumCoord = coord1.addCoordinates(coord2);

    cout << "Coordinates of Point 1: ";
    coord1.displayCoordinates();

    cout << "Coordinates of Point 2: ";
    coord2.displayCoordinates();

    cout << "Sum of Coordinates: ";
    sumCoord.displayCoordinates();

    return 0;
}
