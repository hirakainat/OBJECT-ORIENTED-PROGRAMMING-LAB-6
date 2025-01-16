#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    // Function to initialize pointers
    void initPointers(int Rectangle::*& ptrLength, int Rectangle::*& ptrWidth) {
        ptrLength = &Rectangle::length;
        ptrWidth = &Rectangle::width;
    }
};

int main() {
    Rectangle r;
    int Rectangle::* ptrLength;
    int Rectangle::* ptrWidth;

    // Initialize the pointers using a member function
    r.initPointers(ptrLength, ptrWidth);

    // Take input after initializing the pointers
    cout << "Enter length: ";
    cin >> r.*ptrLength;  // Now it is safe to take input

    cout << "Enter width: ";
    cin >> r.*ptrWidth;   // Now it is safe to take input

    cout << "Using pointers initialized through a function: " << endl;
    cout << "Length: " << r.*ptrLength << ", Width: " << r.*ptrWidth << endl;

    return 0;
}
