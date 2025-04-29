#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ":" << endl;

        for (int j = 0; j < n - i - 1; j++) {
           
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
            // Print the array after each comparison
            /*cout << "After comparing element " << j << " and " << j + 1 << ": ";
            for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;*/
        }

        //cout << "End of Pass " << i + 1 << ":" << endl;
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl << endl;
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

    cout << "Initial array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    bubbleSort(arr, n);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
/*Initial array: 36 25 95 75 85
Pass 1:
25 36 75 85 95
Pass 2:
25 36 75 85 95
Pass 3:
25 36 75 85 95
Pass 4:
25 36 75 85 95

Sorted array:
25 36 75 85 95*/