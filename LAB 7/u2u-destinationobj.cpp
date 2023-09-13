//User defined to user defoned : Conversion routine in destination object

#include <iostream>
using namespace std;

class Ft {
private:
    double value;

public:
    Ft(double val) : value(val) {}

    void display() const {
        cout << "Ft: " << value << " ft" << endl;
    }

    double getValue() const {
        return value;
    }
};

class Mtr {
private:
    double value;

public:
    Mtr(const Ft& source) : value(source.getValue() * 0.3048) {}

    void display() const {
        cout << "Mtr: " << value << " m" << endl;
    }
};

int main() {
    Ft FtObj(30.48);

    Mtr MtrObj = FtObj;

    FtObj.display();
    MtrObj.display();

    return 0;
}
