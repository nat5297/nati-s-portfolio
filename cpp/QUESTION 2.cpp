#include <iostream>
 using namespace std;
 int main() {
  int n;
  cout << "Enter a positive integer n: ";//ACCEPT A POSETIVE INTEGER NUMBER FROM THE USER
  cin >> n;//STORE IN A VARIABLE 
  if (n <= 0) {
    cout << "Please enter a positive integer .Negative numbers are not allowed " << endl;
    return 1; // Exit with an error code
  }
  
  // Print the multiplication table
  cout << "Multiplication Table (1 to " << n << "):\n";
  //NESTED LOOP
  for (int i = 1; i <= n; ++i) {  //CONTROL THE ROWS OF MULTIPLICATION TABLE 
 	for (int j = 1; j <= n; ++j) {  //For each i value j goes from 1 to n  and control the column 
      cout << i * j << "   ";  // Calculate product and print with table 
    }
    cout << endl; // Move to the next line after each row
  }
  return 0; 
 }
