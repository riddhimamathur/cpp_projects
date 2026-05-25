#include <iostream>
using namespace std;
int main()
{
    int i,A,n;
    int arr[n];

    cout <<"\nenter the size of array : ";
    cin>> n;
    cout <<"\nenter the elements :";
    for ( i = 0 ; i < n ; i++ )
    {
        cin>> arr[i];
    }

    cout <<"\nenter the element you want to search : ";
    cin >> A;
    
    int index = -1;

    for (i=0;i<n;i++)
    {
        if (arr[i]==A)
    {   index = i;
        break;   }
    }
    if (index != -1)
    cout << "INDEX : "<< index << endl;\
    else
    cout << "element not found ";
    return 0;
}