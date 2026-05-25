#include <iostream>
using namespace std;
void max_min(int a[])
{
    int i,max = a[0],min = a[0];;
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    cout<<"\nMAx is : "<<max;
    cout<<"\nMin is : "<<min;
}
void rev_ptr(int a[])
{
    int i,lower = 0,upper = 5;
    while (upper>lower)
    {
        swap(a[lower],a[upper])
        lower++;
        upper--;
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void second_largest (int a[], int n)
{
    int i,first = INT_MIN, second = INT_MIN;
    for(i=0;i<n;i++)
    {
        if (a[i]>first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i]>second && a[i]!= first)
        {
            second = a[i];
        }
    }
if (second == INT_MIN)
        cout << "No second largest element found";
    else
        cout << "Second Largest Element: " << second;
}

   int main()
{
    int a[5] = {1,2,3,4,5};
    int i;
    int op;
    while(1)
    {
        cout<<"\nDSA Most Important Array Algorithms\n";
        cout<<"\n1. Find Min and Max";
        cout<<"\n2. Reverse of an Array using two Pointer Technique";
        cout<<"\n3. Second Largest Element";
        cout<<"\n4. Exit";
        cout<<"\nChoose Option : ";
        cin>>op;
        switch(op)
        {
            case 1 : max_min(a);
            break;
            case 2 : rev_ptr(a);
            break;
            case 3 : second_largest(a,5);
            break;

            case 4 : exit(1);
        }
    }
    return 0;
