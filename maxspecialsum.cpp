#include <iostream>
using namespace std;

// Function to calculate the special sum starting from a given index
int calculateSpecialSum(int* arr, int n, int index) {
    int sum = 0;
    int groupSize = 1;
    int i = index;

    // While there are enough elements to pick a group of groupSize
    while (i + groupSize <= n) {
        for (int j = 0; j < groupSize; ++j) {
            sum += arr[i + j];
        }
        i += groupSize;  // Move the index forward by the group size
        groupSize++;      // Increase the group size
    }

    return sum;
}

// Function to find the maximum special sum
int findBestIndex(int* arr, int n) {
    int maxSpecialSum = -1;  // Start with a very low number

    for (int i = 0; i < n; ++i) {
        int specialSum = calculateSpecialSum(arr, n, i);
        if (specialSum > maxSpecialSum) {
            maxSpecialSum = specialSum;
        }
    }

    return maxSpecialSum; // Return the maximum special sum
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Find the maximum special sum
    int maxSpecialSum = findBestIndex(arr, n);
    cout << "The maximum special sum is: " << maxSpecialSum << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
