#include <iostream>
#include <cmath>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int anArray[], int arrLength) {
    // Outer loop for each pass through the array
    for(int i = 0; i < arrLength; ++i) {
        // Inner loop for comparing elements and swapping if necessary
        for(int j = 0; j < arrLength - 1 - i; ++j) {
            // Compare adjacent elements and swap if they are in the wrong order
            if(anArray[j] > anArray[j + 1]) {
                // Swap elements
                const int temp = anArray[j];
                anArray[j] = anArray[j + 1];
                anArray[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    cout << "The sorted array is: ";
    for (int i = 0; i < arrLength; ++i) {
        cout << anArray[i] << " ";
    }
}

int main() {
    // Array to be sorted
    int unsortedArray[] = {4, 9, 3, 1, 7, 5};

    // Calculate the size of the array
    int arrSize = ceil(sizeof(unsortedArray) / sizeof(unsortedArray[0]));

    // Call the bubbleSort function to sort the array
    bubbleSort(unsortedArray, arrSize);

    return 0;
}
