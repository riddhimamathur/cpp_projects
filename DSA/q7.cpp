#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int index = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            index = i;   // keep updating
        }
    }

    if(index != -1)
        cout << "Last occurrence index: " << index;
    else
        cout << "Element not found";

    return 0;
}
