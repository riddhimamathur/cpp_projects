#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  cout << "unique elements are : ";
  for (i=0;i<n;i++)
  {
    int count = 0;
    for (int j=i+1;j<n;j++)
{
    if (arr[i]==arr[j])
    {
        count++;
        break;
    }
}
        if (count==1)
        {
            cout << arr[i]<< endl;
        }
  }
return 0;
  }