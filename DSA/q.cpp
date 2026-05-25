#include <iostream>
using namespace std;

int main()
{
    int a[7] = {1,2,3,4,5,6,7};
    int max = a[0];
    for (int i=0;i<7;i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    cout << "max element of the element : " << max << endl;
    return 0;
}