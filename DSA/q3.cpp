#include <iostream>
using namespace std;

int main()
{
    int a[204];
    int sum =0, n ;
    cout <<"\nenter the number of elements in the array: ";
    cin >> n;

    cout <<"\nenter the elements : ";
    for (int i=0;i<n;i++)
   {
     cin >> a[i];
     sum += a[i];
   }
   cout <<"\nsum of the elements : "<< sum << endl;
   return 0;
}
    