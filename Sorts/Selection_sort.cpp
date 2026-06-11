/*SELECTION SORT : Repeatedly selects the smallest element from the unsorted portion 
and places it at the beginning*/
/*array : 7, 34, 2, 9, 61 
1. find the smallest element in the array (2) and swap it with the first element (7)
   array : 2, 34, 7, 9, 61
2. find the smallest element in the remaining unsorted portion (9) and swap it with the second element (34)
   array : 2, 9, 7, 34, 61
3. find the smallest element in the remaining unsorted portion (7) and swap it with the third element (7)
   array : 2, 9, 7, 34, 61
4. find the smallest element in the remaining unsorted portion (34) and swap it with the fourth element (34)
   array : 2, 9, 7, 34, 61
5. the last element (61) is already in its correct position
   array : 2, 9, 7, 34, 61*/

   // T(O) = O(n^2) in all cases [best, avg, worst]

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter size: ";
    cin >> n;
    int arr[n];
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << "sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}