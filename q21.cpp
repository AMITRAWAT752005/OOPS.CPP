#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;

public:
    void get_data() {
        cout << "Enter the first dimension: ";
        cin >> x;
        cout << "Enter the second dimension: ";
        cin >> y;
    }

    virtual void display_area() {
        cout << "This is the base Shape class." << endl;
    }
};

class Triangle : public Shape {
public:
    void display_area() {
        double area = 0.5 * x * y;
        cout << "The area of the triangle is: " << area << endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        double area = x * y;
        cout << "The area of the rectangle is: " << area << endl;
    }
};

int main() {
    Shape* shape = nullptr;
    int choice;
    cout << "Choose a shape to calculate the area:\n";
    cout << "1. Triangle\n";
    cout << "2. Rectangle\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        shape = new Triangle();
    } else if (choice == 2) {
        shape = new Rectangle();
    } else {
        cout << "Invalid choice!" << endl;
        return 1;
    }
    shape->get_data();
    shape->display_area();
    delete shape;
    return 0;
}
