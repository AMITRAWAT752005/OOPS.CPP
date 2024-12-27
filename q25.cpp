#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToFile(const string &filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    outFile << "Hello, this is line one.\n";
    outFile << "This is line two.\n";
    outFile << "Final line: testing file operations.\n";

    outFile.close();
    cout << "Data written to file successfully.\n";
}

void readCharByChar(const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    char ch;
    cout << "Reading character by character:\n";
    while (inFile.get(ch)) {
        cout << ch;
    }

    inFile.close();
    cout << "\n";
}

void readWordByWord(const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    string word;
    cout << "Reading word by word:\n";
    while (inFile >> word) {
        cout << word << " ";
    }

    inFile.close();
    cout << "\n";
}

void readLineByLine(const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    string line;
    cout << "Reading line by line:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

int main() {
    string filename = "example.txt";

    writeToFile(filename);

    readCharByChar(filename);
    readWordByWord(filename);
    readLineByLine(filename);

    return 0;
}
