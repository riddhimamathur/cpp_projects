//bubble sort 
#include <iostream>
using namespace std;

void swap (int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
    {
        int arr[] = {12,9,27,31,29,11};
        for (int i=0;i<6;i++)
        {
            bool s = false;
            for (int j=0;j<6-i-1;j++){
                if (arr[j]>arr[j+1])
                {
                    swap (arr[ j ],arr[ j + 1 ]);
                    s = true;
                }
            }
                if (!s) break;
        }
            cout << "sorted array: ";
            for (int i=0;i<6;i++)
            { cout << arr[i]<< " ";}
            return 0;      
    }
    
