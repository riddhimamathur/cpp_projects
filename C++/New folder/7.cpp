#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <int> x;
    x.push(1);
    x.push(2);
    x.push(3);
    x.push(4);

    queue < int > q = x;
    cout << "original queue : ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}