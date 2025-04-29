#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1;       

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1; 
}

void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high);

        cout << "After partitioning with pivot at index " << pi << ": ";
        printArray(arr, n);

        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Initial array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
/*Initial array: 1 2 6 8 3 
After partitioning with pivot at index 2: 1 2 3 8 6
After partitioning with pivot at index 1: 1 2 3 8 6
After partitioning with pivot at index 3: 1 2 3 6 8 
Sorted array: 1 2 3 6 8*/