#include <iostream>
using namespace std;

class Box {
private:
    float length;
    float breadth;
    float height;

public:
    
    Box() {
        length = breadth = height = 1;
    }

    
    Box(float side) {
        length = breadth = height = side;
    }

    
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }

    
    void displayVolume() {
        float volume = length * breadth * height;
        cout << "Length: " << length
             << ", Breadth: " << breadth
             << ", Height: " << height
             << " → Volume: " << volume << endl;
    }
};

int main() {
    
    Box box1;
    cout << "Using default constructor (all values = 1):" << endl;
    box1.displayVolume();

    
    Box box2(3);
    cout << "\nUsing single-value constructor (all values = 3):" << endl;
    box2.displayVolume();

  
    Box box3(2, 3, 4);
    cout << "\nUsing three-value constructor (2, 3, 4):" << endl;
    box3.displayVolume();

    return 0;
}
