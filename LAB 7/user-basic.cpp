//User defined to basic type
#include <iostream>
using namespace std;

class MyDouble {
private:
    double value;

public:
    MyDouble(double val) : value(val) {}

    operator double() const {
        return value;
    }
};

int main() {
    MyDouble obj(3.14159);

    double doubleValue = obj;

    cout << "Converted double value: " << doubleValue << endl;

    return 0;
}
