#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called." << std::endl;
    }

    // Parameterized constructor
    MyClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    // Default constructor
    MyClass obj1;

    // Parameterized constructor
    MyClass obj2(42);

    // Destructor automatically called for each object when they go out of scope
    return 0;
}
