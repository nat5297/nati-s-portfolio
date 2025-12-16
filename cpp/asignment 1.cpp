#include <iostream>
#include <string>
using namespace std;

// Define structure and create an array of 4 students
struct StudentDetails {
    string name;
    int id;
    string sex;
    int year;
    float grade;
} students[4];  // Array of 4 students

int main() {
    // Input data for 4 students
    for (int i = 0; i < 4; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Sex: ";
        cin >> students[i].sex;
        cout << "Year: ";
        cin >> students[i].year;
        cout << "Grade: ";
        cin >> students[i].grade;
        cout << "-----------------------------\n";
    }

    // Find the student with the highest grade
    int topIndex = 0;
    for (int i = 1; i < 4; i++) {
        if (students[i].grade > students[topIndex].grade) {
            topIndex = i;
        }
    }

    // Display the top student's details
    cout << "\nStudent with the highest grade:\n";
    cout << "Name: " << students[topIndex].name << endl;
    cout << "ID: " << students[topIndex].id << endl;
    cout << "Sex: " << students[topIndex].sex << endl;
    cout << "Year: " << students[topIndex].year << endl;
    cout << "Grade: " << students[topIndex].grade << endl;

    return 0;
}
