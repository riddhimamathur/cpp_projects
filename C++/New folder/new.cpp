 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v={1,2,3};
    cout << v.size()<<" "<<v.capacity()<<endl;
    v.push_back(10);
    cout << v.size()<<" "<<v.capacity()<<endl;
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    cout << v.size()<<" "<<v.capacity()<<endl;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for (int x : v)
    {
        cout << x << endl;
    }
    return 0;
}