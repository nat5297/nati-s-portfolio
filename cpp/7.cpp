#include <iostream>
 #include <fstream>
 using namespace std;
 // This function copies content from inFile to outFile
 void copyFileContent(ifstream &inFile, ofstream &outFile) {
    // Check if input file is open
    if (!inFile.is_open()) {
        cout << "Error: Cannot open the source file!" << endl;
        return;
    }
    // Check if output file is open
    if (!outFile.is_open()) {
        cout << "Error: Cannot open/create the destination file!" << endl;
        return;
    }
    string line;
    // Read each line from the input file and write it to the output file
    while (getline(inFile, line)) {
        outFile << line << endl;
    }
    cout << "File content copied successfully!" << endl;
 }
 // Main function to test copyFileContent
 int main() {
    ifstream inFile("source.txt");           // File to read from
    ofstream outFile("destination.txt");     // File to write to
    // Call the function
    copyFileContent(inFile, outFile);
    // Close the files
    inFile.close();
    outFile.close();
    return 0;
}
