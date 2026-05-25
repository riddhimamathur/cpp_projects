#include <iostream>
using namespace std;
void print(int n, int i = 1)
{
    if (i>n)
      return;
      cout <<i*n;
      if (i<n)
      cout <<",";
      print (n,i+!);

int main()
{   int n;
    cout <<"enter the value of n : ";
    cin>>n;
    print(n);
    return 0;
}