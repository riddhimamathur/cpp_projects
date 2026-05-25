#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int majority = -1;

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n/2)
        {
            majority = arr[i];
            break;
        }
    }

    if(majority != -1)
        cout << "\nMajority element is: " << majority;
    else
        cout << "\nNo majority element found.";

    return 0;
}