#include <iostream>
using namespace std;

int main() {
    // Step 1: Create an array of integers (our sample data)
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]); // Calculate how many elements

    // Step 2: Bubble Sort Algorithm
    // Outer loop - number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop - compares each pair of elements
        for (int j = 0; j < n - i - 1; j++) {
            // Step 3: Compare current element with the next
            if (data[j] > data[j + 1]) {
                // Step 4: Swap if the current is greater than next
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Step 5: Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
