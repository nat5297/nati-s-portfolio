#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

int main() {
    int count = 0;
    int num = 1;

    cout << "First 10 Perfect Numbers are:\n";
    while (count < 10) {
        if (isPerfect(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    return 0;
}

