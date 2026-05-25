#include <iostream>
using namespace std;

int main()
{
    int arr[5]={12,76,3,270,657};
    int min = arr[0];
    for (int i=0;i<5;i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }
    cout << "min element of the array is "<< min << endl;
    return 0;
}