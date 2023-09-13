//WAP for Overloading insertion(<<) and extraction(>>) operator
#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

    friend ostream& operator<<(ostream& os, const Complex& complex) {
        os << complex.real << " + " << complex.imaginary << "i";
        return os;
    }

    friend istream& operator>>(istream& is, Complex& complex) {
        cout << "Enter real part: ";
        is >> complex.real;
        cout << "Enter imaginary part: ";
        is >> complex.imaginary;
        return is;
    }
};

int main() {
    Complex c1;
    Complex c2(3.5, 2.0);

    cout << "Enter a complex number (real + imaginary i): ";
    cin >> c1;

    cout << "c1=" << c1 << endl;
    cout << "c2=" << c2 << endl;

    return 0;
}
