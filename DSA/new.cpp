#include <iostream>
using namespace std;
int majority(int a[], int n)
{
    int candidate = 0;
    int cnt =0;
    for (int i=0;i<n;i++)
    {
        if (cnt = 0 )
        {
            candidate = a[i];
            cnt = 0;
        }
         else if (a[i]==candidate)
         {
            {cnt++;}
         }
         else 
         {
             cnt--;
         }
    }
   cnt = 0;
   for (int i=0;i<n;i++)
   {
    if (cnt > n/2)
    {
        return candidate;
    }
    else {return -1;}
   }
}

int main()
{
    int a[]={2,2,2,1,1,2,2};
    int n = sizeof(a)/sizeof(a[0]);
    int res = majority (a,n);     
    if (res !=-1)
    {cout << "majority elements i s: "<< res << endl;}
    else {
        cout << "no majority element";}
        return 0;
    }