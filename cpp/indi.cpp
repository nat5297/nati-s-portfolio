#include <iostream>
 using namespace std;
 // Rectangle class definition
 class Rectangle {
 private:
    float length;
    float width;
 public:
    // Constructor: This sets the initial length and width when an object is created
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    // Member function to calculate and return the area of the rectangle
    float calculateArea() {
        return length * width;
    }
    // Optional: Function to display the dimensions
    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
 };
 int main() {
    // Create a rectangle object with length = 5.0 and width = 3.0
    Rectangle myRect(5.0, 3.0);
    // Display the dimensions of the rectangle
    myRect.displayDimensions();
    // Calculate and display the area
    float area = myRect.calculateArea();
    cout << "Area of the rectangle: " << area << endl;
    return 0;
}
