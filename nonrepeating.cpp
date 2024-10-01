
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: ";   
    getline(cin, str);
    int freq[256] = {0};  
    string nonRepeated = "";  
    for (int i = 0; i < str.size(); i++) {
        freq[str[i]]++;
    }
    for (int i = 0; i < str.size(); i++) {
        if (freq[str[i]] == 1) {
            nonRepeated += str[i];  
        }
    }
    if (nonRepeated != "") {
        cout << "Non-repeated characters: " << nonRepeated << endl;
    } else {
        cout << "No non-repeated characters found." << endl;
    }
return 0;
}
