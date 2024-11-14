#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int left = low + 1;
    int right = high;

    while (left <= right) {
        // Find the element on left that is smaller than pivot
        while (left <= right && arr[left] > pivot) {
            left++;
        }

        // Find the element on right that is greater than pivot
        while (left <= right && arr[right] < pivot) {
            right--;
        }

        // Swap left and right elements if needed
        if (left <= right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    // Place pivot in the correct position
    swap(arr[low], arr[right]);
    return right;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);   // Sort the left part
        quickSort(arr, pivotIndex + 1, high);  // Sort the right part
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[7] = {23, 45, 12, 56, 78, 1, 34}; 
    int n = 7;

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array in descending order: ";
    printArray(arr, n);

    return 0;
}

