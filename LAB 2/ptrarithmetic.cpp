#include <iostream>

using namespace std;

int main() {
    int arr[] = {5,89,93,69,2};
    int *ptr = arr;

    cout << "Elements of the array: ";
    for (int i = 0; i < 5; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    ptr = arr;
    int index = 2;
    ptr += index;
    cout << "\nElement at index " << index << " using pointer arithmetic: " << *ptr << endl;

    ptr = arr;
    int offset = 3;
    int value = *(ptr + offset);
    cout << "Element at offset " << offset << " from the beginning: " << value << endl;

    ptr = arr + 4;
    int backOffset = -2;
    value = *(ptr + backOffset);
    cout << "Element at offset " << backOffset << " from the end: " << value << endl;

    return 0;
}
