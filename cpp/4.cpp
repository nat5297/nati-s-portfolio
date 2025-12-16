#include <iostream>
 using namespace std;
 // This function swaps two numbers using pointers
 void switchValues(int *ptr1, int *ptr2) {
    int box = *ptr1;   // Save value from ptr1
    *ptr1 = *ptr2;     // Copy value from ptr2 into ptr1
    *ptr2 = box;       // Move saved value into ptr2Pointers in C++ and Swapping Values Using Pointers
 }
 int main() {
    int a = 12, b = 34;
    cout << "Before swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;
    // Call function and pass the memory addresses of a and b
    switchValues(&a, &b);
    cout << "After swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
 }

