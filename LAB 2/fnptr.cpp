#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {

    int (*operation)(int, int);

    operation = add;
    cout << "Addition: " << operation(5, 3) << endl;

    operation = subtract;
    cout << "Subtraction: " << operation(5, 3) << endl;

    return 0;
}
