#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

double calculateCircleArea(double radius) {
    return PI * pow(radius, 2);
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, width, base, height;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circleArea = calculateCircleArea(radius);
    cout << "Area of the circle: " << circleArea << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    double rectangleArea = calculateRectangleArea(length, width);
    cout << "Area of the rectangle: " << rectangleArea << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double triangleArea = calculateTriangleArea(base, height);
    cout << "Area of the triangle: " << triangleArea << endl;
    
    return 0;
}
