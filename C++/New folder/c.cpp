#include <iostream>
//#include <conio>
using namespace std;

class Complex {
private:
    int a, b;   // a = real part, b = imaginary part

public:
    // Constructor
    Complex(int x = 0, int y = 0) {
        a = x;
        b = y;
    }

    // Overloading + operator
    Complex operator + (Complex c) {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    // Overloading - operator
    Complex operator - (Complex c) {
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }

    // Function to display result
    void display() {
        cout << a << " + i" << b << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2), c3, c4;

    c3 = c1 + c2;   // addition
    c4 = c1 - c2;   // subtraction

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    return 0;
}