#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 2 == 0 && number % 3 == 0) {
        std::cout << "Hello World" << std::endl;
    } else if (number % 2 == 0) {
        std::cout << "Hello" << std::endl;
    } else if (number % 3 == 0) {
        std::cout << "World" << std::endl;
    } else {
        std::cout << "Number is not divisible by 2 or 3." << std::endl;
    }

    return 0;
}
