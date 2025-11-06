#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    
    Complex() {
        real = 0;
        imag = 0;
    }

    
    Complex(float r) {
        real = r;
        imag = 0;
    }

    
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

  
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
  
    Complex c1;
    cout << "Using default constructor:" << endl;
    cout << "Complex number: ";
    c1.display();

  
    Complex c2(5);
    cout << "\nUsing single-argument constructor:" << endl;
    cout << "Complex number: ";
    c2.display();

  
    Complex c3(3, 4);
    cout << "\nUsing two-argument constructor:" << endl;
    cout << "Complex number: ";
    c3.display();

    return 0;
}
