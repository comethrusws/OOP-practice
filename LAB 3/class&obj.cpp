#include <iostream>
using namespace std;

class InputValues {
private:
    int integer;
    float floatValue;
    char characterValue;

public:
    void getInput() {
        cout << "Enter an integer: ";
        cin >> integer;

        cout << "Enter a float value: ";
        cin >> floatValue;

        cout << "Enter a character: ";
        cin >> characterValue;
    }

    void displayValues() {
        cout << "Integer: " << integer << endl;
        cout << "Float: " << floatValue << endl;
        cout << "Character: " << characterValue << endl;
    }
};

int main() {
    InputValues inputObj;
    inputObj.getInput();
    inputObj.displayValues();

    return 0;
}
