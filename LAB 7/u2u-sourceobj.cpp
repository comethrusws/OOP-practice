//User f=defined to user defined conversion routine in source object

#include <iostream>
using namespace std;

class Basab {
private:
    int value;

public:
    Basab(int val) : value(val) {}

    void display() const {
        cout << "Basab: " << value << endl;
    }
};

class Roger {
private:
    int value;

public:
    Roger(int val) : value(val) {}

    Basab toBasab() const {
        return Basab(value);
    }

    void display() const {
        cout << "Roger: " << value << endl;
    }
};

int main() {
    Roger myObj(42);

    Basab yourObj = myObj.toBasab();

    myObj.display();
    yourObj.display();

    return 0;
}
