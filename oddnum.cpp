#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "First " << n << " odd numbers are: ";
    int count = 0;
    int number = 1;

    while (count < n) {
        std::cout << number << " ";
        number += 2;
        count++;
    }

    std::cout << std::endl;
    return 0;
}
