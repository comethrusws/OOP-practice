//Basic to user defined Data coversion
#include<iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    operator int() const {
        return value;
    }
};

int main() {
    MyClass obj(69420);

    int intValue = obj;

    cout << "Converted integer value: " << intValue << endl;

    return 0;
}
