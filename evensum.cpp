#include <iostream>

int main() {
    int number;
    int sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int i = 2; i <= number; i += 2) {
        sum += i;
    }

    std::cout << "Sum of even numbers from 1 to " << number << ": " << sum << std::endl;

    return 0;
}
