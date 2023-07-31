#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person person1, person2;
    person1.name = "Basab";
    person1.age = 17;
    person2.name = "Gregory";
    person2.age = 28;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "----------------------------------" << endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;


    return 0;
}
