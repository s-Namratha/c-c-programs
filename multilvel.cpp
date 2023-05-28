#include <iostream>

// Base class: Shape
class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};

// Derived class 1: Rectangle
class Rectangle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};

// Derived class 2: Square
class Square : public Rectangle {
public:
    void draw() {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    // Create an object of derived class Square
    Square square;

    // Call draw() member function from all three classes
    square.draw(); // Output: Drawing a square

    // Call draw() member function from Rectangle class using Square object
    square.Rectangle::draw(); // Output: Drawing a rectangle

    // Call draw() member function from Shape class using Square object
    square.Shape::draw(); // Output: Drawing a shape

    return 0;
}

