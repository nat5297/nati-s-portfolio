#include <iostream>
 using namespace std;
 // Rectangle class definition
 class Rectangle {
 private:
    double length;  // private attribute
    double width;   // private attribute
 public:
    // Method to set the values of length and width
    void setValues(double l, double w) {
        length = l;
        width = w;
    }
    // Method to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }
    // Method to display the result
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
 };
 int main() {
    Rectangle rect1, rect2;
    // Set values for the first rectangle
    rect1.setValues(5.0, 3.0);
    // Set values for the second rectangle
    rect2.setValues(4.0, 6.0);
    // Display both rectangles
    cout << "First Rectangle:\n";
    rect1.display();
    cout << "\nSecond Rectangle:\n";
    rect2.display();
    // Compare the areas
    double area1 = rect1.calculateArea();
    double area2 = rect2.calculateArea();
    cout << "\nComparison Result:\n";
    if (area1 > area2)
        cout << "The first rectangle has a larger area.\n";
    else if (area1 < area2)
        cout << "The second rectangle has a larger area.\n";
    else
        cout << "Both rectangles have the same area.\n";
    return 0;
 }
