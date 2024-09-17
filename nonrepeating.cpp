/*Implement a C++ program to find the non-repeating characters in string*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: ";   
    getline(cin, str);
    
    int freq[256] = {0}; // Array to store frequency of each character
    
    // First pass: Count frequency of each character
    for (int i = 0; i < str.size(); i++) {
        freq[(int)str[i]]++;
    }
    
    // Second pass: Collect non-repeating characters
    string ans = "";
    for (int i = 0; i < str.size(); i++) {
        if (freq[(int)str[i]] == 1) {
            ans += str[i];
        }
    }
    
    // Output the result
    cout << "Non-repeating characters: " << ans << endl;

    return 0;
}


