#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Adding elements using push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Resize vector so indexing is allowed
    v.resize(5);

    // Adding elements using indexing
    v[3] = 10ṇ0;
    v[4] = 50;

    // Display elements
    cout << "Vector elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
