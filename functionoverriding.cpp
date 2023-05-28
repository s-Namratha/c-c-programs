#include <iostream>

using namespace std;

// Base class
class Shape {
   public:
      virtual void draw() {
         cout << "Drawing a Shape" << endl;
      }
};

// Derived class
class Rectangle : public Shape {
   public:
      void draw() {
         cout << "Drawing a Rectangle" << endl;
      }
};

int main() {
   Shape s;
   Rectangle r;
   
   s = r; // Assign the address of Rectangle object to Shape pointer
   
   // Call the draw function using the Shape pointer
   s.draw();
   
   return 0;
}

