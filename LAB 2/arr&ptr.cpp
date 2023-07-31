#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nUsing pointer: ";
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;
    return 0;
}
