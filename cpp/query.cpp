#include <iostream>
 using namespace std;
 int main() {
    int nums[10];//CREAT AN ARRAY
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
            max = nums[i];
        }
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    // Calculate average value
     for (int i = 0; i < 10; i++) {
        sum += nums[i];//CALCULATE AVERAGE  FROM THE STORED VALUES
    }
    double average = sum / 10
    // Print maximum, minimum, and average values
    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;
    cout << "Average value: " << average << endl;
    return 0;
 }
