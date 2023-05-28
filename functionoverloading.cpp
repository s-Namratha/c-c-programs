#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;
    float float1 = 2.5, float2 = 3.7;

    // Call the functions and print the results
    std::cout << "Sum of two integers: " << add(num1, num2) << std::endl;
    std::cout << "Sum of three integers: " << add(num1, num2, num3) << std::endl;
    std::cout << "Sum of two floating-point numbers: " << add(float1, float2) << std::endl;

    return 0;
}
