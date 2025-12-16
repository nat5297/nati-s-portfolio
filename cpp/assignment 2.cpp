#include <iostream>
#include <string>
using namespace std;

// Structure to store student details
struct StudentProfiels {
    string name;
    int id;
    string sex;
    int year;
    float grade;
}students[4];

int main() {
    
    // Input data for 4 students
    for (int i = 0; i < 4; i++) {
        cout << "ENTER DETAIL FOR STUDENT" << i + 1 << ":\n";
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
    int topGrade = 0;
    for (int i = 1; i < 4; i++) {
        if (students[i].grade > students[topGrade].grade) {
            topGrade = i;
        }
    }

    // Display the top student's details
    cout << "\nStudent with the highest grade:\n";
    cout << "Name: " << students[topGrade].name << endl;
    cout << "ID: " << students[topGrade].id << endl;
    cout << "Sex: " << students[topGrade].sex << endl;
    cout << "Year: " << students[topGrade].year << endl;
    cout << "Grade: " << students[topGrade].grade << endl;

    return 0;
}
