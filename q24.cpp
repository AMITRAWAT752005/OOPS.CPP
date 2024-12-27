#include <iostream>
#include <vector>
#include <algorithm> // For std::find
using namespace std;

// Template class for a generic list
template <typename T>
class List {
private:
    vector<T> elements;

public:
    // Function to insert an element into the list
    void insert(T value) {
        elements.push_back(value);
        cout << value << " inserted into the list.\n";
    }

    // Function to delete an element from the list
    void remove(T value) {
        auto it = find(elements.begin(), elements.end(), value);
        if (it != elements.end()) {
            elements.erase(it);
            cout << value << " removed from the list.\n";
        } else {
            cout << value << " not found in the list.\n";
        }
    }

    // Function to display the list elements
    void display() {
        if (elements.empty()) {
            cout << "The list is empty.\n";
            return;
        }

        cout << "List elements: ";
        for (const auto &elem : elements) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

// Main function to demonstrate the usage of the generic list
int main() {
    // Creating a list of integers
    List<int> intList;
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    intList.display();
    intList.remove(20);
    intList.display();

    // Creating a list of floats
    List<float> floatList;
    floatList.insert(1.5f);
    floatList.insert(2.5f);
    floatList.display();
    floatList.remove(1.5f);
    floatList.display();

    // Creating a list of characters
    List<char> charList;
    charList.insert('A');
    charList.insert('B');
    charList.display();
    charList.remove('C');
    charList.display();

    return 0;
}
