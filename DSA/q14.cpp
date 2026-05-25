//to check if the array is sorted or not 
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    
    cout <<"\nenter the size of array : ";
    cin>>n;
    int arr[n];
    cout <<"\nenter the elements : ";
    for (i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }

    bool sorted=true;

    for (i=0;i<n-1;i++)
    {
        if (arr[i] > arr[i+1])
        {
            sorted=false;
            break;
        }
    }

    if (sorted)
    cout << "sorted array";
    else 
    cout << "unsorted array";

    return 0;
}