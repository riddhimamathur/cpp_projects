//count of even and odd elements in an array
#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int e=0,n;
    int o=0;
    cout <<"\nenter the number of elements in the array: ";
    cin >> n;

    cout <<"\nenter the elements : ";
    for (int i=0;i<n;i++)
   {
     cin >> a[i];
        if (a[i]%2==0)
        {
            e++;
        }
        else{
            o++;
            }
    }
    cout << "even nuber count is " << e << endl;
    cout << "odd number count is " << o << endl;

}