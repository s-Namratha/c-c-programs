#include <iostream>

int main() {
    int start, end;
    std::cout << "Enter the starting number: ";
    std::cin >> start;
    std::cout << "Enter the ending number: ";
    std::cin >> end;

    std::cout << "Numbers divisible by 2 and 3 (or 'pass' if divisible by both):" << std::endl;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0 && i % 3 == 0) {
            std::cout << "pass" << std::endl;
        } else if (i % 2 == 0) {
            std::cout << i << " is divisible by 2" << std::endl;
        } else if (i % 3 == 0) {
            std::cout << i << " is divisible by 3" << std::endl;
        }
    }

    return 0;
}
