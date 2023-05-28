#include <iostream>

// Base class 1
class Animal {
public:
    void speak() {
        std::cout << "Animal speaks!" << std::endl;
    }
};

// Base class 2
class Mammal {
public:
    void run() {
        std::cout << "Mammal runs!" << std::endl;
    }
};

// Derived class
class Dog : public Animal, public Mammal {
public:
    void bark() {
        std::cout << "Dog barks!" << std::endl;
    }
};

int main() {
    // Create an object of derived class Dog
    Dog dog;

    // Call member functions from both base classes and derived class
    dog.speak(); // Output: Animal speaks!
    dog.run();   // Output: Mammal runs!
    dog.bark();  // Output: Dog barks!

    return 0;
}

