#include <iostream>
 using namespace std;
 int main() {
    int nums[10];  //CREATE AN ARRAY
    int max, min;
    double sum = 0;
    cout << "Enter 10 integers:" << endl;// accept 10 integers from the user 
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];//STORE EACH  VALUES ACCEPTED FROM THE USER
    }
    max = nums[0];
    min = nums[0];
    for (int i = 1; i < 10; i++) {
        if (nums[i] > max) {
            max = nums[i];//COMPARE THE VALUES 
        }
        if (nums[i] < min) {
            min = nums[i];//COMPARE THE VALUES 
        }
    }
    for (int i = 0; i < 10; i++) {
        sum += nums[i];
    }
    double average = sum / 10;//CALCULATE AVERAGE  FROM THE STORED VALUES
    cout << "Maximum value: " << max << endl;//CALCULATE MAXIMUM VALUE 
    cout << "Minimum value: " << min << endl;//CALCULATE MINIMUM  VALUE 
    cout << "Average value: " << average << endl;//CALCULATE AVERAGE 
    return 0;
 }
