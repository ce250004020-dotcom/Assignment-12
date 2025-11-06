#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    float price;

public:
    Car(string b, float p) {
        brand = b;
        price = p;
    }

    void displayDetails() {
        cout << "Brand: " << brand << ", Price: $" << price << endl;
    }
};

int main() {
    Car car1("Toyota", 25000);
    Car car2("BMW", 55000);

    cout << "Car 1 Details:" << endl;
    car1.displayDetails();

    cout << "\nCar 2 Details:" << endl;
    car2.displayDetails();

    return 0;
}
