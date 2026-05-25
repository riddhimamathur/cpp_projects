#include <iostream>
using namespace std;

int main()
{
    int i,n,j,k;
    int arr[n];
    
    cout <<"\nenter the number of elements : ";
    cin >> n;
    cout << "\nenter the elements : ";
    for (i=0;i<n;i++)
    {
    cin >> arr[i];
    }
    
    cout << "\n\nfrequency : ";
    for (i=0;i<n;i++)
    {
        int count = 1;
        bool visited = false;
        for (k=0;k<i;k++)
        {
            if (arr[i]==arr[k])
            {
                visited = true;
                break;
            }
        }
    if (visited)
    continue;
    
    for (j=i+1;j<n;j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
    }
    cout << arr[i]<< " : " << count << endl;
}
return 0;}