#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n+1];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter position to delete : ";
    cin >> pos;

    for(int i = pos-1; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletion: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
