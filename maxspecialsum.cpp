#include <iostream>
using namespace std;


int calculateSpecialSum(int* arr, int n, int index) {
    int sum = 0;
    int groupSize = 1;
    int i = index;

    while (i + groupSize <= n) {
        for (int j = 0; j < groupSize; ++j) {
            sum += arr[i + j];
        }
        i += groupSize;  
        groupSize++;      
    }

    return sum;
}
int findBestIndex(int* arr, int n) {
    int maxSpecialSum = -1;  

    for (int i = 0; i < n; ++i) {
        int specialSum = calculateSpecialSum(arr, n, i);
        if (specialSum > maxSpecialSum) {
            maxSpecialSum = specialSum;
        }
    }

    return maxSpecialSum; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int maxSpecialSum = findBestIndex(arr, n);
    cout << "The maximum special sum is: " << maxSpecialSum << endl;
    delete[] arr;
    return 0;
}
