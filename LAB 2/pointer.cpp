#include <iostream>

using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Dereferenced value of ptr: " << *ptr << endl;

    *ptr = 59;
    cout << "Value of num after changing through pointer: " << num << endl;

    return 0;
}
