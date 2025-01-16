#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int width;
    static int count;
public:
    rectangle(int l, int w) {
        length = l;
        width = w;
        count++;
    }

    static void displayCount() {
        cout << "Number of Rectangle objects created: " << count << endl;
    }
    void print() const {
        cout << "length = " << length << ", width = " << width << endl;
    }

};
int rectangle::count = 0;
int main() {
    rectangle r(12, 13);
    rectangle r1(1, 2);

    // r.setLENGTH(12).setwidth(13); 

    rectangle::displayCount();
    r.print();

    system("pause");
    return 0;
}



#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int width;

public:
    // Setters
    rectangle& setLENGTH(int l) {  // Changed return type to rectangle&
        length = l;
        return *this;  // Return the current object
    }

    rectangle& setwidth(int w) {  // Changed return type to rectangle&
        width = w;
        return *this;  // Return the current object
    }

    // Print function
    void print() const {
        cout << "length = " << length << ", width = " << width << endl;
    }
};

int main() {
    rectangle r;

    // Cascaded calls to set length and width
    r.setLENGTH(12).setwidth(13);

    // Print the dimensions
    r.print();

    system("pause");
    return 0;
}



#include <iostream>
using namespace std;

class rectangle {
public:
    int length;
    int width;

    rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }
};

int main() {

    rectangle r(0, 0);
    rectangle* rect = &r;
    int rectangle::* ptr1 = &rectangle::length;
    int rectangle::* ptr2 = &rectangle::width;

    cout << "Enter length: ";
    cin >> r.*ptr1;

    cout << "Enter width: ";
    cin >> r.*ptr2;
    cout << "Length: " << *rect.*ptr1 << endl;
    cout << "Width: " << *rect.*ptr2 << endl;

    system("pause");
    return 0;
}
