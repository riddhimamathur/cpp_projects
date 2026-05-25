// bubble sort
#include <iostream>
using namespace std;

// swap function
void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;  

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  
                swapped = true;
            }
        }

        if (!swapped) break;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}